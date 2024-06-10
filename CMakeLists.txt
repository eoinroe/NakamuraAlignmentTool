cmake_minimum_required(VERSION 3.25)
project(NakamuraAlignmentTool)

set(CMAKE_CXX_STANDARD 17)

add_executable(NakamuraAlignmentTool main.cpp AlignmentTool/midi2pianoroll_v170504.cpp AlignmentTool/MusicXMLToHMM_v170104.cpp)
