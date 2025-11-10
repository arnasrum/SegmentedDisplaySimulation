#ifndef SEGMENT_H
#define SEGMENT_H
#include <vector>
using namespace std;


class Segment {
    vector<int> rgb;
    bool isOn;
    public: 
        Segment();
        ~Segment();
        Segment(const Segment& other);

        bool getPowerStatus();
        vector<int> getColor();
        void changeStatus(bool isOn);
        void toggle();
        void changeColor(int red, int green, int blue);
        void printStatus();
};

#endif // Segment
