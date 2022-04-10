#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int sum=0;
    float avg=0;

    cout << "Enter 5 numbers: " << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum=sum+arr[i];
    }
      avg=sum/2;

    cout<<"The sum of array is :"<<sum<<endl;
    cout<<"The avg of array is :"<<avg<<endl;
    return 0;
}
