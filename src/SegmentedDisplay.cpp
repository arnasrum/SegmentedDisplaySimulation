#include<iostream>
#include "../include/SegmentedDisplay.h"
#include "../include/Led.h"
#include <vector>

SegmentedDisplay::SegmentedDisplay() {
    this->lights.reserve(this->segments);
    for(int i = 0; i < this->segments; i++) {
        this->lights.push_back(new Led());
    }
}

SegmentedDisplay::~SegmentedDisplay() {}


Led* SegmentedDisplay::getLightAt(int index) {
    if(this->segments <= index) {
        std::runtime_error("Trying to access out of bounds light");
    }
    return this->lights.at(index);
}

void SegmentedDisplay::printDisplay() {
    
    if(true) {
        std::cout << " " << "\U0001FB7B" << " " << "\U0001FB7B" << std::endl;
        std::cout << "\U0001FB75" << " " << " " << " " << "\U0001FB70" << std::endl;
        std::cout << " " << "\U0001FB79" << " " << "\U0001FB79" << std::endl;
        std::cout << "\U0001FB75" << " " << " " << " " << "\U0001FB70" << std::endl;
        std::cout << " " << "  " << " " << "  " << std::endl;

    } else {
        std::cout << " " << "\U0001FB7B" << " " << "\U0001FB7B" << std::endl;
        std::cout << "\U0001FB75" << "\\" << "|" << "/" << "\U0001FB70" << std::endl;
        std::cout << " " << "\U0001FB79" << " " << "\U0001FB79" << std::endl;
        std::cout << "\U0001FB75" << "/" << "|" << "\\" << "\U0001FB70" << std::endl;
        std::cout << " " << "\U0001FB76" << " " << "\U0001FB76" << std::endl;
    }

}

