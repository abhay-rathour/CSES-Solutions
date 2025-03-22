#include <bits/stdc++.h>
using namespace std;
long long power(long long a, long long b)
{
	long long res = 1;
	while (b > 0) {

		if (b & 1) {
			res = (res * a);
		}
		a = (a * a);
		b >>= 1;
	}
	return res;
}
int main()
{
	int q;
	cin>>q;
	while(q--) {
		long long n;
		cin>>n;
		if(n<=9) {
			cout<<n<<"\n";
			continue;
		}
		int c = 1;
		long long dec = power(10,c)-1;
		while(dec*c<n) {
			n=n-dec*c;
			c++;
			dec = power(10,c)-power(10,c-1);
		}
		int idx = n%c;
		long long k = power(10,c-1)+(n-1)/c;
		if(idx) {
			k = k / power(10, c - idx);
		}
		cout<<k%10<<"\n";
	}

	return 0;
}