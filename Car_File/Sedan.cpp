
#include "Sedan.h"
#include "iostream"
#include "string"


Sedan::Sedan() : Sedan("Black",4,true)
{
    //left empty
}

Sedan::Sedan(string color,int doors)
: Car(color,doors), sunroof(sunroof)
{
}

Sedan::~Sedan() //Destructor
{
    std::cout << "calling Car Destructor\n";
}

string Sedan::toString()
{
    std::ostringstream output;

    std::ostringstream ouput << "SEDAN:" << Car::toString();

    return output.str();

}