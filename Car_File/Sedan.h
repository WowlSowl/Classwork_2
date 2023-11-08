//Sedan.h
#ifndef SEDAN_H
#define SEDAN_H

#include <iostream>
    using std::ostream;

#include <string>
    using std::string;


#include "Car.h"

class Sedan : public Car
{
private:
    bool sunroof;

public:
    // the interface of the car
    Sedan();
    explicit Sedan(string color, int doors, bool sunroof);

    virtual ~Sedan();

    string toString();

};
#endif
