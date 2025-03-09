//Trailing Zeros
#include <bits/stdc++.h>
using namespace std;


int main()
{
	long long n;
	int mod = 1e9+7;
	cin>>n;
	long long p2=0;
    long long k =2;
    while(n/k){
        p2+=(n/k);
        k=k*2;
    }
    long long p5 =0;
    k=5;
    while(n/k){
        p5+=n/k;
        k=k*5;
    }
    cout<<min(p2,p5)<<endl;

	return 0;
}