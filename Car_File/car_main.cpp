/*#include <iostream>
    using std::cout;
#include "car.cpp"
#include "car.h"

int main()
{
    //Car aCar{"Red", "Sedan", 4};
    Car *aCarPtr(nullptr);
    aCarPtr = new Car();

    std::cout << aCarPtr->toString() << std::endl;
    //(*aCarPtr).setColor("Black");
   // aCarPtr->setColor("Black");
    //std::cout << aCarPtr->toString() << std::endl;
    delete aCarPtr;
    aCarPtr = nullptr;
}
*/
#include <iostream>
    using std::cout;
#include "car.h"
#include "Sedan.h"

int main()
{

    //Car aCar{"Red", "Sedan", 4};
    Car *aCarPtr{nullptr};
    aCarPtr = new Car();
    Sedan *sedanPtr = new Sedan("Black", "Sedan", 4);

    cout << (*aCarPtr).toString() <<std::endl;
    // (*aCarPtr).setColor("Black");
    aCarPtr->setColor("Black");
    cout << aCarPtr->toString() <<std::endl;
    cout << sedanPtr->toString() <<std::endl;

    delete aCarPtr;
    delete sedanPtr;
    aCarPtr = nullptr;
    return 0;
}