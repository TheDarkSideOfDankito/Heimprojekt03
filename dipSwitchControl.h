//
// Created by ganymed on 30/03/16.
//

#ifndef DIPSWITCHCONTROL_H
#define DIPSWITCHCONTROL_H


#include <stdbool.h>
#include <USBAPI.h>


void setupDipSwitch();

uint8_t getGearFromSwitchPositions();

bool isSwitch1On();
bool isSwitch2On();
bool isSwitch3On();


#endif //HEIMPROJEKT02_DIPSWITCHCONTROL_H
