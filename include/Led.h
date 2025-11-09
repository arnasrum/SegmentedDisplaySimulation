#ifndef LED_H
#define LED_H
#include <vector>
using namespace std;


class Led {
    vector<int> rgb;
    bool isOn;
    public: 
        Led();
        ~Led();
        Led(const Led& other);

        bool getPowerStatus();
        vector<int> getColor();
        void changeStatus(bool isOn);
        void toggle();
        void changeColor(int red, int green, int blue);
        void printStatus();
};

#endif // LED_H
