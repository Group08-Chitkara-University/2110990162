#include<iostream>
using namespace std;

// Question-1
// include <iostream>
// using namespace std;

// int AP(int n)
// {
//   int ap=3*n+7;
//   return ap;
// }

// int main()
// {
//   int n;
//   cin>>n;
//   int ans=AP(n);
//   cout<<"Answer is="<<ans<<endl;

//   return 0;
// } 
// Question-2
// int setBitsB(int b)
// {
//   int count = 0;
//   while(b!=0)
//   {
//     if(b&1)
//     {
//       count++;
//     }
//     b=b>>1;
//   }
//   return count; 
// }
// int setBitsA(int a)
// {
//   int count = 0;
//   while(a!=0)
//   {
//     if(a&1)
//     {
//       count++;
//     }
//     a=a>>1;
//   }
//   return count; 
// }

// int main()
// {
//   int a,b;
//   cin>>a>>b;
//   int ans1=setBitsA(a);
//   int ans2=setBitsB(b);
//   cout<<"Set bits of A="<<ans1<<endl;
//   cout<<"Set bits of B="<<ans2<<endl;
//   int ans=ans1+ans2;

//   cout<<"Total set bits of A and B are ="<<ans<<endl;

//   return 0;
// }
// Question-3
#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 2; i < n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    } 
      return b;
}

int main()
{
    int n;
    cin >> n;
    
    cout << "The " <<n<<"th term of the series is = "<< fibonacci(n) << endl;

    return 0;
}

// OUTPUT QUESTIONS:
// 1)  10
// 2)  15
// 3)  196