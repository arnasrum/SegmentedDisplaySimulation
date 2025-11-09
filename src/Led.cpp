#include <iostream>
#include "../include/Led.h"
#include <vector>
using namespace std;

Led::Led() {
    this->isOn = false;
    rgb = {255, 255, 255};
}
Led::Led(const Led &other) {
    this->isOn = other.isOn;
    rgb = {other.rgb[0], other.rgb[1], other.rgb[2]};
}
Led::~Led() {}

bool Led::getPowerStatus() {
    return this->isOn;
}

vector<int> Led::getColor() {
    return vector {rgb[0], rgb[1], rgb[2]};
}

void Led::changeStatus(bool isOn) {
    this->isOn = isOn;
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
