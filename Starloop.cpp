#include <iostream>
#include <string>

int width = {5};

void Stars (int width)

{

    for (int i = 0; i < width; i++)
    {
        for (int j{0}; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}