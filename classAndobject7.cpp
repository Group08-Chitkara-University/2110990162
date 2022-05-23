#include<iostream>
using namespace std;

class student{
    private:
    string name;

    public:
    void Get_name(void);
    void Displayname(void);
};

void student :: Get_name(void){
    cout<<"Enter student name: "<<endl;
    cin>>name;
}
void student :: Displayname(){
    if (name=="")
    {
       cout<<"Unknown student"<<endl;
    }
    else{
        cout<<"Student name is : "<<name<<endl;
    }
    
}

int main(){
    student balak;
    balak.Get_name();
    balak.Displayname();
return 0;
}