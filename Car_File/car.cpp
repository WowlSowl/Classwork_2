//Car.cpp
#include <string>
    using std::string;

#include <iostream>
#include <stdexcept>
#include <sstream>
    using std::ostringstream;

#include "Car.h"

///////////////////////////////////////////////////////////////////////////////////
//// Class Members
////////////////////////////////
int Car::counter{1};  //class attribute

int Car::getNextId() //class method
{
    int current = Car::counter;
    Car::counter++;

    return current;
}


///////////////////////////////////////////////////////////////////////////////////
//// Instance Members
////////////////////////////////
Car::Car() : Car("Black",0)
{
    //left empty
}

Car::Car(string color)
: Car(color,  5)
{
}

Car::Car(string color,  int doors)
:color{color},doors{doors}
{
    this->enginePtr = new Engine("V6");

    this->id = Car::getNextId();
    // this->id = getNextId();
    // this->id = this->getNextId();
}

Car::~Car() //Destructor
{
    std::cout << "calling Car Destructor\n";
    delete this->enginePtr;
    this->enginePtr=nullptr;
}

int Car::getId() const
{
    return this->id;
}



void Car::setColor(string color)
{
    this->color = color;
}

void Car::setDoors( int doors)
{
    this->doors = doors;
}




string Car::toString()
{
    ostringstream output;
    output << "CAR:A " << this->color
           << " Car, with " << this->doors << " doors."
           << " With a Engine:" << this->enginePtr->getModel();
    return output.str();

}
