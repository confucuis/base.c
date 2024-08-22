#include <stdio.h>
#include "led.h"

int main() {

    struct Led myLed;
    
    // Initialize the Led object
    NewLed(&myLed);
    
    // Test initial state
    printf("Initial state: %d\n", LightState(&myLed));

    // Turn on the LED and test state
    LightOn(&myLed);
    printf("State after turning on: %d\n", LightState(&myLed));

    // Turn off the LED and test state
    LightOff(&myLed);
    printf("State after turning off: %d\n", LightState(&myLed));

    return 0;
}
