#include<iostream>
using namespace std;
//Iterative Solution

int trailingZeroes(int n){
    int answer=0;
    while(n%10==0)
    { 
        answer++;
        n=n/10;
    }
    return answer;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int fact=1;
    for (int i=1;i<=n;i++)
        fact=fact*i;
    int answer=trailingZeroes(fact);
    cout<<answer;
}