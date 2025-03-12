//=====[Libraries]=============================================================

#include "mbed.h"
#include "arm_book_lib.h"
#include "gas_sensor.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

DigitalIn Gas_Sensor(PE_12);
//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

//initializes sensor
void gasSensorInit() 
{
}

//updates sensor
void gasSensorUpdate()
{
}

//returns value of sensor reading
bool gasSensorRead()
{
    return Gas_Sensor;
}