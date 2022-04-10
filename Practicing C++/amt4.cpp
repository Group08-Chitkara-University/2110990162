#include <iostream>
using namespace std;


int main(){
    int x=1,y=2 ;
    cout << "Initially first variable x= "<< x ;
    cout << " and second second variable y= "<< y << endl ;

    x=x+y;
    y=x-y;
    x=x-y;
    
    cout << "After swapping first variable x= "<< x ;
    cout << " and second variable y= "<< y ;
    return 0;
}