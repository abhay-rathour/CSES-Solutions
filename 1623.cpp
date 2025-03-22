#include <bits/stdc++.h>
using namespace std;



long long sum=0;
long long minDiff(vector<long long> &arr, int idx, long long curSum){
    if(idx==arr.size()){
        long long s1 = curSum;
        long long s2 = sum-curSum;
        return abs(s1-s2);
    }
    return min(minDiff(arr,idx+1,curSum+arr[idx]),minDiff(arr,idx+1,curSum));
}

int main(){
    
    int n;
    cin>>n;
    vector<long long> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<minDiff(arr,0,0);
	return 0;
}