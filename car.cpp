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

Car::Car() : Car("Black","SUV",0)
{
    //left empty
}
{
    //default values
    this->color="Black";
    this->sedan="SUV";
    this->doors=0;
}


Car::Car(string color, string type, int doors)
:color{color}, type{type}, doors{doors}
{

}
void Car::setColor(string color)
{
    this->color = color;
}
void Car::setType(string aCarType, int doorNo)
{
    if (aCarType != "Sedan" and aCarType != "SUV")
    {
        throw std::invalid_argument("Invalid Car Tpe");
    }
    type = aCarType;
    doors = doorNo;
}

void Car::toString()
{
    std::ostringstream output;
    output << "A " << color << 
}

