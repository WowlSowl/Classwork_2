#include <iostream>
    using std::cin;
    using std::cout;
    using std::endl;
#include <string>
    using std::string;
#include <array>
    using std::array;
#include "car.h"
#include <stdexcept>


Car::Car(string color, string type, int doors)
:color{color}, type{type}, doors{doors}
{

}
void Car::setColor(string Acolor);
{
    color = aColor;
}
void Car::setType(string aCarType, int doorNo)
{
    if (aCarType != "Sedan" and aCarType "SUV")
    {
        throw std::invalid_argument("Invalid Car Tpe");
    }
    type = aCarType;
    doors = doorNo;
}

string Car::toString()
{
    return "A " + color + " " + type + " " + doors + " ";
}
