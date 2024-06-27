#include <iostream>
#include "Align.h"

int MusicXMLToMIDIAlign(std::string I1, std::string I2)
{
    Midi2PianoRoll(0, I2);

    MusicXMLToHMM(I1);
    MusicXMLToFmt3x(I1);

    ScorePerfmMatcher(I1 + "_hmm.txt", I2 + "_spr.txt", I2 + "_pre_match.txt", 1.0);
    ErrorDetection(I1 + "_fmt3x.txt", I1 + "_hmm.txt", I2 + "_pre_match.txt", I2 + "_err_match.txt");
    RealignmentMOHMM(I1 + "_fmt3x.txt", I1 + "_hmm.txt", I2 + "_err_match.txt", I2 + "_realigned_match.txt", 0.3);

    std::string command = "cp " + I2 + "_realigned_match.txt" + " " + I2 + "_match.txt";
    std::system(command.c_str());

    command = "rm " + I2 + "_realigned_match.txt";
    std::system(command.c_str());

    command = "rm " + I2 + "_err_match.txt";
    std::system(command.c_str());

    command = "rm " + I2 + "_pre_match.txt";
    std::system(command.c_str());
}

int MIDIToMIDIAlign(const std::string& I1, const std::string& I2)
{
    Midi2PianoRoll(0, I1);
    Midi2PianoRoll(0, I2);

    SprToFmt3x(I1);
    Fmt3xToHmm(I1);

    ScorePerfmMatcher(I1 + "_hmm.txt", I2 + "_spr.txt", I2 + "_pre_match.txt", 0.001);
    ErrorDetection(I1 + "_fmt3x.txt", I1 + "_hmm.txt", I2 + "_pre_match.txt", I2 + "_err_match.txt");
    RealignmentMOHMM(I1 + "_fmt3x.txt", I1 + "_hmm.txt", I2 + "_err_match.txt", I2 + "_realigned_match.txt", 0.3);

    std::string command {};

    command = "cp " + I2 + "_realigned_match.txt" + " " + I2 + "_match.txt";
    std::system(command.c_str());

    MatchToCorresp(I2 + "_match.txt", I1 + "_spr.txt", I2 + "_corresp.txt");

    command = "rm " + I2 + "_realigned_match.txt";
    std::system(command.c_str());

    command = "rm " + I2 + "_err_match.txt";
    std::system(command.c_str());

    command = "rm " + I2 + "_pre_match.txt";
    std::system(command.c_str());

    return 0;
}

int main() {
    // std::string I1 = "/Users/eoinroe/Downloads/AlignmentTool/ex_ref";
    // std::string I2 = "/Users/eoinroe/Downloads/AlignmentTool/ex_align1";

    // MusicXMLToMIDIAlign(I1, I2);

    std::string I1 = "/Users/eoinroe/Downloads/AlignmentTool/ex_align1";
    std::string I2 = "/Users/eoinroe/Downloads/AlignmentTool/ex_align2";

    MIDIToMIDIAlign(I1, I2);

    return 0;
}
