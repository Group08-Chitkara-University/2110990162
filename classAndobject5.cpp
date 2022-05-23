#include<iostream>
using namespace std;

class salary{

    public:
    int a_sal,b_sal,c_sal;
    
    void Get_sal(void);
    void Total_sal(void);

};

void salary :: Get_sal(void){
    cout << "Enter salary of A,B and C: " << endl;
    cin >> a_sal;
    cin >> b_sal;
    cin >> c_sal;
}

void salary :: Total_sal(){
    cout<<"Total Salary is : "<<a_sal+b_sal+c_sal<<endl;
}

int main(){
    salary money;
    money.Get_sal();
    money.Total_sal();
return 0;
}