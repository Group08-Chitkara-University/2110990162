#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter your age."<<endl;
    cin>>num;

    if(num>=18 && num<60){
        cout<<"Eligible for vaccination with least priority"<<endl;
    }
    else if(num>60){
        cout<<"Eligible for vaccination with highest priority"<<endl;
    }
    else if(num<18){
        cout<<"minor not eligible"<<endl;
    }
    else{
        cout<<"Enter your valid age";
    }
    return 0;
}