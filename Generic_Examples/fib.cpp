#include <iostream>
#include <string>

int fib(int x); //recursive

int main()
{
    for (int i{0}; i < 10; i++)
    std::cout << "Fib(" << i << ") = " << fib (i) << std::endl;
}

int fib (int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else 
    {
        //recursive call
        return fib (x-1) + fib (x-2);
    }
}