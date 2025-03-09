//Two Sets
#include <bits/stdc++.h>
using namespace std;


int main()
{
	long long n;
	cin>>n;
	long long sum = n*(n+1)/2;
	if(sum%2) {
		cout<<"NO";
	}
	else {
		cout<<"YES"<<endl;
		int firstSet = n%2?(n/2)+1 : (n/2);
		int k = n%2?n-1:n;
		cout<<firstSet<<endl;
		for(int i=0; i<firstSet/2; i++) {
			cout<<i+1<<" "<<k-i<<" ";
		}
		cout<<endl;
		int secondSet = n/2;
		cout<<secondSet<<endl;
		int left = firstSet/2;
		for(int i = 0; i<secondSet/2; i++) {
			cout<<i+left+1<<" "<<k-i-left<<" ";
		}
		if(n%2) {
			cout<<n;
		}
	}

	return 0;
}