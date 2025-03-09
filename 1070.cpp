//Permutations
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    if(n==2||n==3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    if(n==4){
        cout<<"2 4 1 3";
        return 0;
    }
    int start = 1;
    for(int i=0;i<n;i++){
        cout<<start<<" ";
        if(start+2<=n){
            start=start+2;
        }
        else{
            start = 2;
        }
    }
    return 0;
}