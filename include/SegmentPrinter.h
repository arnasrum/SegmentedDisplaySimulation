#ifndef SEGMENTPRINTER_H
#define SEGMENTPRINTER_H
#include <vector>
#include "SegmentedDisplay.h"
#include <iostream>
using namespace std;

class SegmentPrinter {

    int segments = 16;
    vector<string> onChars;
    vector<string> offChars; 

    public:
        SegmentPrinter();
        ~SegmentPrinter();
        void setupChars(vector<string> offChars, vector<string> onChars);
        void replaceOffChar(int index, string newChar);
        void replaceOnChar(int index, string newChar);
        void printSegmentedDisplay(SegmentedDisplay* display);
};





#endif // SEGMENTPRINTER_H
