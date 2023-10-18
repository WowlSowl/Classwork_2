#include <iostream>
    using std::cout;
#include "car.h"

int main()
{
    Car aCar{"Red", "Sedan", 4};

    cout << aCar.toString() << std::endl;
}