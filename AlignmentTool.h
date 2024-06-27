//
// Created by Eoin Roe on 09/06/2024.
//

#pragma once

#include <string>

int Midi2PianoRoll(int pianoRollType, const std::string& infileStem);

int MusicXMLToHMM(const std::string& infileStem);

int MusicXMLToFmt3x(const std::string& infileStem);

int ScorePerfmMatcher(const std::string& hmmName, const std::string& perfmName, const std::string& matchfileName, double secPerQN);

int ErrorDetection(const std::string& fmt3FileName, const std::string& hmmFileName, const std::string& in_matchFileName, const std::string& out_witherror_matchFileName, bool realignment=false);

int RealignmentMOHMM(const std::string& fmt3xFile, const std::string& hmmFile, const std::string& inMatchFile, const std::string& outMatchFile, double widthSec);

int SprToFmt3x(const std::string& infileStem);

int Fmt3xToHmm(const std::string& infileStem);

int MatchToCorresp(const std::string& alignMatch, const std::string& refSpr, const std::string& outCorresp);





