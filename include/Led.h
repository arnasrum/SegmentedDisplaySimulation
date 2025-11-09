#ifndef LED_H
#define LED_H


class Led {
    int* rgb;
    bool isOn;
    public: 
        Led();
        ~Led();
        Led(const Led& other);


    void toggle();
    void changeColor(int red, int green, int blue);
    void printStatus();
};

#endif // LED_H
