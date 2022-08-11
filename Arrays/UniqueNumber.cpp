#include<iostream>
using namespace std;

int main(){
    int arr[]={2,2,3,3,7};
    int n=(sizeof(arr)/sizeof(arr[0]));
    cout<<n<<endl;
    for (int i=0;i<n;i++){
        int count=0;
    for (int j=0;j<n;j++){
        if(arr[i]==arr[j])
            count++;           
    }
    
    if(count==1){
        cout<<arr[i]<<endl;
        }
}


return 0;
}
