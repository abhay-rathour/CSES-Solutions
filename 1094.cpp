#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    int arr[n];
    long long ans =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i!=0){
            if(arr[i]<arr[i-1]){
                ans+=arr[i-1]-arr[i];
                arr[i]=arr[i-1];
            }
        }
    }
    cout<<ans;
    
    
    return 0;
}