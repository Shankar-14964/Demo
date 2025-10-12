#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,8,14,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l=0,h=n-1;
    int target;
    cout<<"Enter target value : "<<endl;
    cin>>target;
    bool found = false;
    while(l<=h){
        int m = (l+h)/2;
        if(arr[m]==target){
            cout<<"Element Found !!";
            found = true;
            break;
        }
        else if(arr[m]>target){
            h = m-1;
        }
        else{
            l = m+1;
        }
    }
    if(!found) cout<<"Element Not Found !!";
    return 0;
}