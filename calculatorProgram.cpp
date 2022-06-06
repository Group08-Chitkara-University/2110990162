#include<iostream>
using namespace std;
int main(){
int a;
int b;
cout<<"Enter First Number"<<endl;
cin>>a;
cout<<"Enter Second Number"<<endl;
cin>>b;
char op;
cout<<"Enter Operation You want To Perform"<<endl;
cin>>op;
switch (op)
{
case '+':cout<<(a+b)<<endl;
    break;
case '-':cout<<(a-b)<<endl;
    break;
case '*':cout<<(a*b)<<endl;
    break;
case '/':cout<<(a/b)<<endl;
    break;
case '%':cout<<(a%b)<<endl;
    break;

default:
     cout<<"Please Enter a Valid Operation"<<endl;
    break;
}



return 0;
}