#include<iostream>
using namespace std;

int main() {

    int arr[5], i, sodd = 0;

    cout << "Enter 5 numbers:"<<endl;
    for (i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0) {
             sodd = sodd + arr[i];
        } 
    }
    cout << "\nSum of odd:" << sodd;

    return 0;
}