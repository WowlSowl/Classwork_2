#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;

int main()
{
    int a{10};
    int *ptr{nullptr};

    cout << "a variable: " << a << "\t" << &a << endl; // & is the pointer in this case
    cout << "ptr variable: " << ptr << "\t" << &ptr << endl;

    ptr = &a;

    cout << "ptr variable: " << ptr << "\t" << &ptr << "\t" << *ptr << endl;
}