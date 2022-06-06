#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int SumOfArray(int arr[],int size){ 
    int sum=0;
     for (int i = 0; i <size; i++)
    {
        sum+=arr[i];
        
    }
    return sum;
    
}
    

int main(){
int size;
cout<<"Enter Size Of array"<<endl;
cin>>size;
int arr[100];
int counter=0;
for (int i = 0; i < size; i++)
{   cout<<"Enter Element "<<counter<<endl;
    cin>>arr[i];
    counter+=1;
}
cout<<endl;
cout <<"The sum is "<<SumOfArray(arr,size);



return 0;
}