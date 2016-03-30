#include "7SegmentControl.h"
#include "dipSwitchControl.h"


void doSetup();

void doLoop();


int main() {
    doSetup();

    while(1) {
        doLoop();
    }
}


void doSetup() {
    setup7Segment();
    setupDipSwitch();
}

void doLoop() {
    //cascadeLeds(500);

    //test();

    uint8_t gear = getGearFromSwitchPositions();
    showNumber(gear);
}