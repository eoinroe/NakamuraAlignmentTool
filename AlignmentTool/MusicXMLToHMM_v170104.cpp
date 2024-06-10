/*
Copyright 2019 Eita Nakamura

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<fstream>
#include<cassert>
#include"Hmm_v170225.hpp"
#include "../Align.h"

using namespace std;

int MusicXMLToHMM(const string& infileStem) {

	vector<int> v(100);
	vector<double> d(100);
	vector<string> s(100);
	stringstream ss;

	Fmt1x fmt1;
	Fmt2 fmt2;
	Hom hom;
	Hmm hmm;
	fmt1.ReadMusicXML(infileStem + ".xml");
	fmt2.ConvertFromFmt1x(fmt1);
	hom.ConvertFromFmt2(fmt2);
	hmm.ConvertFromHom(hom);
	hmm.WriteFile(infileStem + "_hmm.txt");

	return 0;
}//end main
