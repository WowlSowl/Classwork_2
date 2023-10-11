#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;

int main()
{
    int a{10};
    int *ptr{nullptr};
    int *ptrRef2{nullptr};

    cout << "a variable: " << a << "\t" << &a << endl; // & is the pointer in this case
    cout << "ptr variable: " << ptr << "\t" << &ptr << endl;

    ptr = &a;
    a = 20;

    cout << "A variable is " << a << "\t" << &a << endl; 
    cout << "ptr variable: " << ptr << "\t" << &ptr << "\t" << *ptr << endl;

    cout << "Changing ptr to 50" << endl;
    *ptr = 50;

    cout << "A variable is " << a << "\t" << &a << endl; 
    cout << "ptr variable: " << ptr << "\t" << &ptr << "\t" << *ptr << endl;

}

int* copyPointerData(int *p)
{

    if (p != nullptr)
    {
        int *newP;
        newP = new int;
        *newP = *p;

        return newP;
    }
    return nullptr;
}

