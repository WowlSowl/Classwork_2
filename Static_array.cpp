#include <iostream>
#include <cstdlib>

unsigned int getGrade()
{
    return static_cast <unsigned int> (rand() % 101);
}
int getIndexOfValue(unsigned int myData[], int arraySize, int searchValue)
{
    for(int i{0}; i < arraySize; i++)
    {
        if (myData[i] == searchValue)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    const unsigned int MAX_GRADES{5};

    unsigned int grades[MAX_GRADES]{};  // [] is a static array MAX_GRADES is used as the size, without {} all values will 
                                        //be initilized at 0
    //grades[0] = 1;
    //grades[1] = 2;
    //grades[2] = 3;
    //grades[3] = 4;
    for (size_t i{0}; i < MAX_GRADES; i++)
        grades[i] = getGrade();
    // grades is a pointer to the element 
    std::cout << grades << "\t" << &grades << "\t" << *grades <<std::endl;
    //Calculation of Sum and Avg and printing
    int sum {0};
    float avg {0.0};

    for (size_t i{0}; i < MAX_GRADES; i++)
    {
        std::cout << grades [i] << " | ";
        sum += grades [i];
    }
    std::cout << std::endl;

    //Print Sum and Avg
    avg = static_cast <float> (sum) / MAX_GRADES;
    std::cout << "The grade sum is : " << sum << "\n";
    std::cout << "The grade average is : " << avg << "\n";

    unsigned int searchValue{0};
    std::cout << "Enter search value: ";
    std::cin >> searchValue;
    std::cout << getIndexOfValue(grades, MAX_GRADES,searchValue) << std::endl;
}