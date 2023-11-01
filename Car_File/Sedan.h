#ifndef Sedan_H
#define Sedan_H

#include <string>
    using std::string;

#include "engine.h"
#include "car.h"

class Sedan : public Car

//class Sedan
{
private:
    bool sunroof;
    
public:
    // the interface of the Sedan
    Sedan();
    explicit Sedan(std::string color);
    explicit Sedan(std::string color,int doors);

    ~Sedan();

    string toString();

};
#endif
