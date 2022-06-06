#include<iostream>
using namespace std;
int Power(int a , int b){
    int ans=1;
    for (int i = 1; i <=b; i++)
    {
        ans=ans*a;
    }
    return ans;

}
int main(){
int a;
cout<<"Enter First Number"<<endl;
cin>>a;
int b;
cout<<"Enter second Number"<<endl;
cin>>b;
int answer=Power(a,b);
cout<<"The Answer Is "<<answer<<endl;

return 0;
}