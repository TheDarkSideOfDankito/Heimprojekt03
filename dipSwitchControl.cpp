//
// Created by ganymed on 30/03/16.
//

#include "dipSwitchControl.h"
#include "pinMappings.h"
#include "pinControl.h"


void setupDipSwitch() {
    setPinAsInput(&DIP_SWITCH_1_DDR, DIP_SWITCH_1_DDR_PIN);
    setPinAsInput(&DIP_SWITCH_2_DDR, DIP_SWITCH_2_DDR_PIN);
    setPinAsInput(&DIP_SWITCH_3_DDR, DIP_SWITCH_3_DDR_PIN);
}


uint8_t getGearFromSwitchPositions() {
    uint8_t gear = 0;

    if(isSwitch1On()) {
        gear += 1;
    }

    if(isSwitch2On()) {
        gear += 2;
    }

    if(isSwitch3On()) {
        gear += 4;
    }

    return gear;
}


bool isSwitch1On() {
    return isPinSet(&DIP_SWITCH_1_PIN_REGISTER, DIP_SWITCH_1_PIN);
}

bool isSwitch2On() {
    return isPinSet(&DIP_SWITCH_2_PIN_REGISTER, DIP_SWITCH_2_PIN);
}

bool isSwitch3On() {
    return isPinSet(&DIP_SWITCH_3_PIN_REGISTER, DIP_SWITCH_3_PIN);
}
