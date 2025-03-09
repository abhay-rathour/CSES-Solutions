//Bit Strings
#include <bits/stdc++.h>
using namespace std;


int main()
{
	long long n;
	int mod = 1e9+7;
	cin>>n;
	if(n==0){
	    cout<<0<<endl;
	}
	else{
	    long long ans=1;
	    while(n--){
	        ans=ans*2;
	        ans=ans%mod;
	    }
	    cout<<ans<<endl;
	}

	return 0;
}