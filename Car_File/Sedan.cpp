#include <string>
    using std::string;

#include <iostream>
#include <stdexcept>
#include <sstream>
    using std::ostringstream;

#include "Sedan.h"


Sedan::Sedan() : Sedan("Black","SUV",0)
{
    //left empty
}

Sedan::Sedan(string color, string type)
: Sedan(color, type, 5)
{
}

Sedan::Sedan(string color, string type, int doors)
:color{color}, type{type},doors{doors}
{
    this->enginePtr = new Engine("V6");
}

Sedan::~Sedan() //Destructor
{
    std::cout << "calling Car Destructor\n";
    delete this->enginePtr;
    this->enginePtr=nullptr;
}

void Sedan::setColor(string color)
{
    this->color = color;
}
void Sedan::setType(string type, int doors)
{
    if (type != "Sedan" && type != "SUV")
    {
        throw std::invalid_argument("Invalid Car Type");
    }

    this->type = type;
    this->doors = doors;
}

string Sedan::toString()
{
    ostringstream output;
    output << "A " << this->color << " " << this->type
           << " Car, with " << this->doors << " doors."
           << " With a Engine:" << this->enginePtr->getModel();
    return output.str();

}