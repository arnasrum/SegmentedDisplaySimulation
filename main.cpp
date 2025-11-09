#include<iostream>
using namespace std;
#include "include/SegmentedDisplay.h"

int main() {
    cout << "Hello world" << endl;
    
    SegmentedDisplay* sd = new SegmentedDisplay();
    sd->printDisplay();

    return 0;
}
