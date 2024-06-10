#include "AlignmentTool/midi2pianoroll_v170504.h"
// #include "AlignmentTool/MusicXMLToHMM_v170104.h"

#include <string>

int main() {
    std::string I1 = "/Users/eoinroe/Downloads/AlignmentTool/ex_ref";
    std::string I2 = "/Users/eoinroe/Downloads/AlignmentTool/ex_align1";

    Midi2PianoRoll(0, I2);

    // MusicXMLToHMM(I1);
    // MusicXMLToFmt3x(I1);

    return 0;
}
