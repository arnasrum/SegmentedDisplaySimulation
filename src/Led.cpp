#include <iostream>
#include "../include/Led.h"

Led::Led() {
    this->isOn = false;
    rgb = new int[3]{255, 255, 255};
}
Led::~Led() {
    delete[] rgb;
    rgb = nullptr;
}

void Led::toggle() {
    this->isOn = !this->isOn;
}

void Led::changeColor(int red, int green, int blue) {
    this->rgb[0] = std::max(std::min(255, red), 0);
    this->rgb[1] = std::max(std::min(255, green), 0);
    this->rgb[2] = std::max(std::min(255, blue), 0);
}

void Led::printStatus() {
    std::cout << "Led status: " << "isOn: " << this->isOn << "\n" << " rgb: " << "(" << this->rgb[0] << ", " << this->rgb[1] << ", " << this->rgb[2] << ")" << std::endl;
}
