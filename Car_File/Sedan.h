#ifndef Sedan_H
#define Sedan_H

#include <string>
    using std::string;

#include "engine.h"

class Sedan
{
private:
    string color;
    string type; //Sedan, SUV
    int doors;
    Engine *enginePtr;

public:
    // the interface of the Sedan
    Sedan();
    explicit Sedan(string color, string type);
    explicit Sedan(string color, string type, int doors);

    ~Sedan();

    void setColor(string color);
    void setType(string type, int doors);

    string toString();

};
#endif
