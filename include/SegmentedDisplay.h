#ifndef SEGMENTEDDISPLAY_H
#define SEGMENTEDDISPLAY_H
#include "./Segment.h"
#include<vector>
using namespace std;

class SegmentedDisplay {
    int numSegments = 16;
    vector<Segment*> segments;


    public:
        SegmentedDisplay();
        ~SegmentedDisplay();
        Segment* getSegmentAt(int index);
        void printDisplay();
        void turnOff();

};




#endif // SEGMENTEDDISPLAY_H

