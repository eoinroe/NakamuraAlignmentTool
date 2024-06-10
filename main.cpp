#include <iostream>
#include "Align.h"

int main() {
    std::string I1 = "/Users/eoinroe/Downloads/AlignmentTool/ex_ref";
    std::string I2 = "/Users/eoinroe/Downloads/AlignmentTool/ex_align1";

    Midi2PianoRoll(0, I2);

    MusicXMLToHMM(I1);
    MusicXMLToFmt3x(I1);

    return 0;
}
