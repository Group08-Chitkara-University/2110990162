#include<iostream>
using namespace std;

class electricity{
    int units;
    friend int calculateBill();
    public:
    void setdata(int x){
        units=x;
    }

};

int calculateBill(){
    if (units>=400)
    {
        /* code */
    }
    
}
int main(){

return 0;
}