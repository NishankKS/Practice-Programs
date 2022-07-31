#include<iostream>
using namespace std;
//Iterative Solution

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int fact=1;
    for (int i=1;i<=n;i++)
        fact=fact*i;
    cout<<"The factorial of the given number is: "<<fact;
}

//Recursive Solution
//  int factorialNumber(int n)
//  only work for positive inputs
//  {
//     if (n==0)
//         return 1;
//     else 
//         return n*factorialNumber(n-1);
//  }

//  int main(){
//     int ans=factorialNumber(5);
//     cout<<ans;
//  }