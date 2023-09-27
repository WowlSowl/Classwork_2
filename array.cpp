#include <array>
#include <iostream>
#include <cstdlib>

unsigned int getGrade()
{
    return static_cast <unsigned int> (rand() % 101);
}

int main()
{
    const unsigned int MAX_GRADES{100};

    std::array <unsigned int, MAX_GRADES> grades; // You can also use {0,2,3,4,5} at the end of grades to initilize the array

    //grades[0] = 1;
    //grades[1] = 2;
    //grades[2] = 3;
    //grades[3] = 4;
    for (size_t i{0}; i < MAX_GRADES; i++)
        grades[i] = getGrade();

    int sum {0};
    float avg {0.0};

    for (size_t i{0}; i < MAX_GRADES; i++)
    {
        std::cout << grades [i] << " | ";
        sum += grades [i];
    }
    std::cout << std::endl;
    avg = static_cast <float> (sum) / MAX_GRADES;
    std::cout << "The grade sum is : " << sum << "\n";
    std::cout << "The grade average is : " << avg << "\n";
}
