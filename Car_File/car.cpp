/*#include <iostream>
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
    this->enginePtr = new Engine("V6");
}


Car::~Car() //Deconstructor
{
    delete this->enginePtr;
    this->enginePtr=nullptr;
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
    output << "A" << this->color << " " << this->type
    << "Car, with" << this->doorNo << "with a " << this->Engine;
}
*/

//Car.cpp
#include <string>
    using std::string;

#include <iostream>
#include <stdexcept>
#include <sstream>
    using std::ostringstream;

#include "Car.h"


Car::Car() : Car("Black","SUV",0)
{
    //left empty
}

Car::Car(string color, string type)
: Car(color, type, 5)
{
}

Car::Car(string color, string type, int doors)
:color{color}, type{type},doors{doors}
{
    this->enginePtr = new Engine("V6");
}

Car::~Car() //Destructor
{
    std::cout << "calling Car Destructor\n";
    delete this->enginePtr;
    this->enginePtr=nullptr;
}

void Car::setColor(string color)
{
    this->color = color;
}
void Car::setType(string type, int doors)
{
    if (type != "Sedan" && type != "SUV")
    {
        throw std::invalid_argument("Invalid Car Type");
    }

    this->type = type;
    this->doors = doors;
}

string Car::toString()
{
    ostringstream output;
    output << "A " << this->color << " " << this->type
           << " Car, with " << this->doors << " doors."
           << " With a Engine:" << this->enginePtr->getModel();
    return output.str();

}
