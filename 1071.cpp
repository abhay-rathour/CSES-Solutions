#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		long x,y;
		cin>>y>>x;
		long base = max(x,y);
		long baseNum= (base-1)*(base-1);
		if(base%2==0) {
			long dist = abs(x-base)+abs(y);
			cout<<baseNum+dist<<endl;
		}
		else {
			long dist = abs(x)+abs(y-base);
			cout<<baseNum+dist<<endl;
		}

	}
	return 0;
}