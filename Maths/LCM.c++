#include<iostream>
using namespace std;
int lcm(int a, int b){
    int result=max(a,b);
    while(true){
        if(result%a==0 && result%b==0){
            return result;
        }
        result++;
    }
    return result;
}

int main(){
    int answer=lcm(12,16);
    cout<<answer;
}

// With GCD
// #include <iostream>
// using namespace std;

//  int gcd(int a, int b)
// {
// 	if(b==0)
// 		return a;

// 	return gcd(b, a % b);
// }

// int lcm(int a, int b)
// {
//     return (a * b) / gcd(a, b);
// }

// int main() {
    
//     	int a = 4, b = 6;
    	
//     	cout<<lcm(a, b);
    	
//     	return 0;
// }