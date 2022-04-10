#include<iostream>
using namespace std;
int main(){
    // checking even or odd
    int num;
    cin>>num;

    if(num%2==0){
        cout<<"Number is even i.e "<<num<<endl;
    }else{
        cout<<"Number is odd i.e "<<num<<endl;
    }
return 0;
}

// programm to add positive number
#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"Enter a number: "<<endl;
    cin>>num;

    while(num>0){
            sum+=num;
            cout<<"Enter a number: "<<endl;
            cin>>num;
        }
    cout<<"The sum of positive number is "<<sum<<endl;
return 0;
}


// check if a number is prime or not

#include<iostream>
using namespace std;
int main(){
    int number,i;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    for ( i = 2; i < number; i++)
    {
        if(number%i==0){
            cout<<"Not a prime number"<<endl;
            break;
        }
    }
    if(i==number){
        cout<<"prime number"<<endl;
        }
return 0;
}

