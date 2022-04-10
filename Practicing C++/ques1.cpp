#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number."<<endl;
    cin>>num;
    if(num>=9 && num<10){
        cout<<"A+"<<endl;
    }
    else if(num>=8 && num<9){
        cout<<"A"<<endl;
    }
    else if(num>=7 && num<8){
        cout<<"B+"<<endl;
    }
    else if(num>=6 && num<7){
        cout<<"B"<<endl;
    }
    else if(num>=5 && num<6){
        cout<<"C"<<endl;
    }
    else if(num>=4 && num<5){
        cout<<"D"<<endl;
    }
    else{
        cout<<"Student failed";
    }
    return 0;
}