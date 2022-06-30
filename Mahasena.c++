//Mahasena Codechef AMR15A
#include <iostream>
using namespace std;

int main() {
    int t,count=0,temp=0;
	cin>>t;
	int a[t];
	for (int i=0;i<t;i++)
	{
	    cin>>a[i];
	} 
    for (int j=0;j<t;j++)
        {
            if (a[j]%2==0)
	            count++;
	        else
	            temp++;
        }
	    
	if (count>temp)
	{
	    cout<<"READY FOR BATTLE";
	}
	else {
	    cout<<"NOT READY";
	}
	return 0;
}
