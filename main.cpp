#include <iostream>
#include "Align.h"

int main() {
    std::string I1 = "/Users/eoinroe/Downloads/AlignmentTool/ex_ref";
    std::string I2 = "/Users/eoinroe/Downloads/AlignmentTool/ex_align1";

    // MusicXMLToMIDIAlign
    Midi2PianoRoll(0, I2);

    MusicXMLToHMM(I1);
    MusicXMLToFmt3x(I1);

    ScorePerfmMatcher(I1 + "_hmm.txt", I2 + "_spr.txt", I2 + "_pre_match.txt", 1.0);
    ErrorDetection(I1 + "_fmt3x.txt", I1 + "_hmm.txt", I2 + "_pre_match.txt", I2 + "_err_match.txt");

    return 0;
}
