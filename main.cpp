#include "AlignmentAlgorithms.h"

int main() {
    // std::string I1 = "/Users/eoinroe/Downloads/AlignmentTool/ex_ref";
    // std::string I2 = "/Users/eoinroe/Downloads/AlignmentTool/ex_align1";

    // MusicXMLToMIDIAlign(I1, I2);

    std::string I1 = "/Users/eoinroe/Downloads/AlignmentTool/ex_align1";
    std::string I2 = "/Users/eoinroe/Downloads/AlignmentTool/ex_align2";

    MIDIToMIDIAlign(I1, I2);

    return 0;
}
