#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating constructor
    //  constructor is a special kind of member function which have same name as that of class.
    //  it is used to initilize the objects of its class
    // it is automatically invoked when an oject is created
    //  it returns no value and cannot have any return type
    complex(void); // Default constructor --> which accepts no arguments

    void printComplex()
    {
        cout << "The complex Number is: " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)
{
    a = 10;
    b = 12;
}
int main()
{
    complex c;
    c.printComplex();
    return 0;
}