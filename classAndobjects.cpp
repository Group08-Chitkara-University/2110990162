#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void Getdata(int a1, int b1, int c1);
    void Setdata()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::Getdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee Amit;
    Amit.d = 12;
    Amit.e = 47;
    Amit.Getdata(2, 4, 7);
    Amit.Setdata();
    return 0;
}