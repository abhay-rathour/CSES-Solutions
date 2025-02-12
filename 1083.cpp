#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int sz =n-1;
    int arr[sz];
    for(int i=0;i<sz;i++){
        cin>>arr[i];
    }
    sort(arr,arr+sz);
    for(int i=0;i<sz;i++){
        if(arr[i]!=i+1){
            cout<<i+1;
            return 0;
        }
    }
    cout<<n;
    return 0;
}