#include <iostream>
#include "../include/SegmentPrinter.h"
#include "../include/SegmentedDisplay.h"
#include "../include/Led.h"
#include <vector>
using namespace std;


SegmentPrinter::SegmentPrinter() {
    this->onChars.reserve(this->segments);
    this->offChars.reserve(this->segments);
}

SegmentPrinter::~SegmentPrinter() {}

void SegmentPrinter::setupChars(vector<string> offChars, vector<string> onChars) {
    for(int i = 0; i < this->segments; i++) {
        this->offChars.push_back(offChars[i]);
        this->onChars.push_back(onChars[i]);
    }
}

void SegmentPrinter::replaceOffChar(int index, string newChar) {
    if(index >= this->segments) {
        throw runtime_error("Trying to set char out of bounds");
    }
    this->offChars[index] = newChar;
}

void SegmentPrinter::replaceOnChar(int index, string newChar) {
    if(index >= this->segments) {
        throw runtime_error("Trying to set char out of bounds");
    }
    this->onChars[index] = newChar;
}

void SegmentPrinter::printSegmentedDisplay(SegmentedDisplay* display) {

    vector<string> printChars;
    printChars.reserve(this->segments);
    for(int i = 0; i < this->segments; i++) {
        Led* light = display->getLightAt(i);
        if(light->getPowerStatus()) {
            printChars.push_back(this->onChars.at(i));
        } else {
            printChars.push_back(this->offChars.at(i));
        }
    }
    cout << " " << printChars[0] << " " << printChars[1] << "\n" 
    << printChars[2] << printChars[3] << printChars[4] << printChars[5] << printChars[6] << "\n"
    << " " << printChars[7] << " " << printChars[8] << "\n"
    << printChars[9] << printChars[10] << printChars[11] << printChars[12] << printChars[13] << "\n"
    << " " << printChars[14] << " " << printChars[15] << std::endl;

}
