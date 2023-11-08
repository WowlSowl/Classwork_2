#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;

#include <string>
    using std::string;
#include "Car.h"
#include <vector>

int main()
{
    std::vector<Car*> inventory;

    int option{0};

    while(option != 99)
    {
        cout << "1)Add Car" <<endl;
        cout << "2)Print Cars" <<endl;
        cout << "99)Exit" <<endl;
        cout << ">>> ENTER OPTION >>>";
        cin >> option;

        if (option == 1)
        {
            string color;
            cout << "Enter Car Color>>";
            cin >>color;
            Car *aNewCar = new Car(color, "Sedan", 4);
            inventory.push_back(  aNewCar  );
        }
        if (option == 2)
        {
            for (Car* ptr: inventory)
            {
                cout << ptr->toString() <<std::endl;
            }
        }
    }//end while


    for (Car* ptr: inventory) //Deleting memory
    {
        delete ptr;
    }
}