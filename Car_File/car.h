/*#ifndef CAR_H
#define CAR_H

#include <iostream>
    using std::cin;
    using std::cout;
    using std::endl;
#include <string>
    using std::string;
#include <array>
    using std::array;
#include "Engine.h"

class Car
{
private:
    string color;
    string type; //Sedan, SUV
    int doors;
    Engine *enginePtr; //creates a pointer to another class
public:
    //Interface of the car
    explicit Car(std::string color, std::string type, int doors);

    void setColor(std::string color);
    void setType(std::string aCarType, int doorNo);

    string toString();
};
#endif */

//Car.h
#ifndef CAR_H
#define CAR_H

#include <string>
    using std::string;

#include "engine.h"

class Car
{
private:
    string color;
    int doors;
    Engine *enginePtr;

public:
    // the interface of the car
    Car();
    explicit Car(string color);
    explicit Car(string color,int doors);

    ~Car();

    void setColor(string color);
    void setDoors(int doors);

    string toString();

};
#endif
