//Sedan.cpp
#include <string>
    using std::string;

#include <iostream>
#include <stdexcept>
#include <sstream>
    using std::ostringstream;

#include "Sedan.h"

///////////////////////////////////////////////////////////////////////////////////
//// Instance Members
////////////////////////////////
Sedan::Sedan() : Sedan("Black",0, false)
{
    //left empty
}



Sedan::Sedan(string color, int doors, bool sunroof)
: Car(color,doors), sunroof(sunroof)
{
}

Sedan::~Sedan() //Destructor
{
    std::cout << "calling Sedan Destructor\n";
}


string Sedan::toString()
{
    ostringstream output;

    output << "SEDAN:" <<   Car::toString();

    return output.str();

}

 