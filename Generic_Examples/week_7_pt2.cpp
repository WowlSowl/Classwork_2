#include <vector>
#include <isomanip>

int main()
{
std::vector myData{1,2,3,4,5,6};
for(size_t index{0}; 
    try
    {
        myData.at(5); //will cause a error
    }
    catch (out_of_range & e) 
    // will catch said error and print out a more user friendly message, the e is the variable to hold the exception
    {
        std::cout << "ERROR" << e.what() << std::endl;
    }

    myData.erase(mtData.begin()+4); //deletes element 4

}