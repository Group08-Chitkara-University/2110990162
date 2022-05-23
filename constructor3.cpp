#include<iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int,int); // Parameterised constructor --> which accepts 2 arguments

    void printComplex()
    {
        cout << "The complex Number is: " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
int main(){
    // implicit call
    complex c1(2,4);
    c1.printComplex();

    // explicit call
    complex c2 = complex(6,8);
    c2.printComplex();


return 0;
}