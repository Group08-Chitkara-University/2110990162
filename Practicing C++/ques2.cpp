#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number."<<endl;
    cin>>num;
    if(num<0){
      num=num*(-1);
        cout<<num<<endl;
    }
    else{
        cout<<num;
    }
    return 0;
}