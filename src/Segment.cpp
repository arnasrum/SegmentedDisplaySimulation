#include <iostream>
#include "../include/Segment.h"
#include <vector>
using namespace std;

Segment::Segment() {
    this->isOn = false;
    rgb = {255, 255, 255};
}
Segment::Segment(const Segment &other) {
    this->isOn = other.isOn;
    rgb = {other.rgb[0], other.rgb[1], other.rgb[2]};
}
Segment::~Segment() {}

bool Segment::getPowerStatus() {
    return this->isOn;
}

vector<int> Segment::getColor() {
    return vector {rgb[0], rgb[1], rgb[2]};
}

void Segment::changeStatus(bool isOn) {
    this->isOn = isOn;
}

void Segment::toggle() {
    this->isOn = !this->isOn;
}

void Segment::changeColor(int red, int green, int blue) {
    this->rgb[0] = std::max(std::min(255, red), 0);
    this->rgb[1] = std::max(std::min(255, green), 0);
    this->rgb[2] = std::max(std::min(255, blue), 0);
}

void Segment::printStatus() {
    std::cout << "Segment status: " << "isOn: " << this->isOn << "\n" << " rgb: " << "(" << this->rgb[0] << ", " << this->rgb[1] << ", " << this->rgb[2] << ")" << std::endl;
}
