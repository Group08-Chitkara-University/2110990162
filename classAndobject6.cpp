#include <iostream>
using namespace std;

class ATM
{
    private:
    string name;
    int acc_no;
    int current_bal;
    int deposite;
    int withdrawl;
    int total_bal;
    public:

    void set_value(void);
    void deposite_money(void);
    void Withdrawl(void);
};

void ATM :: set_value(void){
    cout<<"Enter your Name : "<<endl;
    cin>>name;
    cout<<"Enter your acc no : "<<endl;
    cin>>acc_no;
    cout<<"Enter your current bal : "<<endl;
    cin>>current_bal;
}

void ATM :: deposite_money(void){
    cout<<"Enter amount to be deposited: "<<endl;
    cin>>deposite;
    total_bal=current_bal+deposite;
    cout<<"Now total balance becomes: "<<total_bal<<endl;
}

void ATM :: Withdrawl(void){
    cout<<"Enter amount to be withdrawl: "<<endl;
    cin>>withdrawl;
    total_bal=total_bal-withdrawl;
    cout<<"Now total balance becomes: "<<total_bal<<endl;
}

int main()
{
    ATM money;
    money.set_value();
    money.deposite_money();
    money.Withdrawl();
    return 0;
}