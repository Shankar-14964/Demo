#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,5,6,9,10};
    int target;
    cout<<"Enter target Val : \n";
    cin>>target;
    int n = sizeof(arr)/sizeof(arr[0]);
    bool found = false;
    for(int i=0;i<n;i+=1){
        if(arr[i]==target){
            cout<<"Element Found !!";
            found=true;
            break;
        }
    }
    if(!found) cout<<"Element not present";
    return 0;
}