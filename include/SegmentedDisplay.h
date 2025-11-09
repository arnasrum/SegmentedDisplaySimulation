#ifndef SEGMENTEDDISPLAY_H
#define SEGMENTEDDISPLAY_H
#include "./Led.h"
#include<vector>
using namespace std;

class SegmentedDisplay {
    
    int segments = 16;
    vector<Led> lights;

    public:
        SegmentedDisplay();
        ~SegmentedDisplay();
        
        void printDisplay();

};




#endif // SEGMENTEDDISPLAY_H

