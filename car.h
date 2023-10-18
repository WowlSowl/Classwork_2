#ifndef CAR_H
#define CAR_H

#include <iostream>
    using std::cin;
    using std::cout;
    using std::endl;
#include <string>
    using std::string;
#include <array>
    using std::array;

class Car{
private:
    string color;
    string type; //Sedan, SUV
    int doors;
public:
    //Interface of the car
    explicit Car(std::string color, std::string type, int doors);

    void setColor(std::string color);
    void setType(std::string aCarType, int doorNo);

    string toString();
};
#endif