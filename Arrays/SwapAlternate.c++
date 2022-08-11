#include<iostream>
using namespace std;
 int main(){
    int even[]={1,2,3,4};
    int odd[]={1,2,3};
    int n=(sizeof(even)/sizeof(even[0]));
    int m=(sizeof(odd)/sizeof(odd[0]));
    cout<<m<<endl;
    for (int i=0;i<m;i+=2)
    //very important to give i=i+2
    {
        if(i+1<m)
        {
            swap(odd[i],odd[i+1]);
        }
        else{
            continue;
        }
    }
    //Used for printing
    for (int i=0;i<m;i++)
    {
        cout<<odd[i];
    }

 }