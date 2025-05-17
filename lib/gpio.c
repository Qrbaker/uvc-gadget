#include <wiringPi.h>

void streaming_status_enable()
{
    // initalize GPIO registers
    wiringPiSetupGpio();

    // set Pin 21 to OUTPUT mode
    pinMode(21, OUTPUT);

    // set to pull none
    pullUpDnControl(21, PUD_OFF);

    // set pin 21 HIGH
    digitalWrite(21, HIGH);
}

void streaming_status_disable()
{
        // initalize GPIO registers
    wiringPiSetupGpio();

    // set Pin 21 to OUTPUT mode
    pinMode(21, OUTPUT);

    // set to pull none
    pullUpDnControl(21, PUD_OFF);

    // set pin 21 LOW
    digitalWrite(21, LOW);
}