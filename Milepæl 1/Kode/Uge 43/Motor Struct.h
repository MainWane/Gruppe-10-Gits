#include <iostream>

struct hbridge
{
    const int motorPinA1;
    const int motorPinA2;
    const int motorPinB1;
    const int motorPinB2;
};

struct direction 
{ 
    bool A1Val;
    bool A2Val;
    bool B1Val;
    bool B2Val;
};

void printMotorPins(hbridge motorPins) 
{
    std::cout << motorPins.motorPinA1 << std::endl;
    std::cout << motorPins.motorPinA2 << std::endl;
    std::cout << motorPins.motorPinB1 << std::endl;
    std::cout << motorPins.motorPinB2 << std::endl;
};

void initMotors (hbridge motorPins)
{
    pinMode(motorPins.motorPinA1, OUTPUT);
    pinMode(motorPins.motorPinA2, OUTPUT);
    pinMode(motorPins.motorPinB1, OUTPUT);
    pinMode(motorPins.motorPinB2, OUTPUT);
};

void steering (hbridge motorPins, direction pinValues)
{
    digitalWrite(motorPins.motorPinA1, pinValues.A1Val);
    digitalWrite(motorPins.motorPinA2, pinValues.A2Val);
    digitalWrite(motorPins.motorPinB1, pinValues.B1Val);
    digitalWrite(motorPins.motorPinB2, pinValues.B2Val);
};

hbridge leftWheels = {12, 13, 18, 19};
hbridge rightWheels = {11, 14, 15, 16};

direction forward = {1, 0, 1, 0};
direction reverse = {0, 1, 0, 1};
direction stop = {0, 0, 0, 0};

int main() 
{
    printMotorPins(leftWheels);
    std::cout << "---" << std::endl;
    printMotorPins(rightWheels);
    std::cout << "---" << std::endl;
    steering(leftWheels, forward);
}