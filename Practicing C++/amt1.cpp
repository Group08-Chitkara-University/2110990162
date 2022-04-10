#include<iostream>
using namespace std;
int main()
{


    int num1 ,num2,num3,num4,num5;
    cout<<"Enter The Value Of Num1:\n";  /* << is insertion operator */
    cin>> num1; /* >> is Extraction Operator */
    cout<<"Enter The Value Of Num2:\n";  /* << is insertion operator */
    cin>> num2; /* << is Extraction Operator */
    cout<<"Enter The Value Of Num3:\n";
    cin>> num3;
    cout<<"Enter The Value Of Num4:\n";
    cin>> num4;
    cout<<"Enter The Value Of Num5:\n";
    cin>> num5;
    int sum=num1+num2+num3+num4+num5;
     cout<<"The Sum is "<<sum;
    return 0;
}