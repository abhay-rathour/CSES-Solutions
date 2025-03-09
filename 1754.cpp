//Coin Piles
#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--) {
		long long a =0;
		long long b =0;
		cin>>a>>b;
		long long x = 2*a-b;
		long long y = 2*b-a;
		if(x>=0&&x%3==0 && y>=0&&y%3==0) {
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}

	}

	return 0;
}