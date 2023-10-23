#include <iostream>
    using std::cout;
#include "car.cpp"
#include "car.h"

int main()
{
    //Car aCar{"Red", "Sedan", 4};
    Car *aCarPtr(nullptr);
    aCarPtr = new Car("Red", "Sedan", 4);

    std::cout << (*aCarPtr).toString() << std::endl;
    //(*aCarPtr).setColor("Black");
    aCarPtr->setColor("Black");
    std::cout << aCarPtr->toString() << std::endl;

    delete aCarPtr;
    aCarPtr = nullptr;

}