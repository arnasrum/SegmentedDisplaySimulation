#include<iostream>
#include "../include/SegmentedDisplay.h"
#include "../include/Led.h"

SegmentedDisplay::SegmentedDisplay(): lights(this->segments) {}

SegmentedDisplay::~SegmentedDisplay() {}

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

