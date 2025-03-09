//Tower of Hanoi
#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int start, int end,vector<vector<int>> &moves) {
	if(n==1) {
		moves.push_back({start,end});
		return;
	}
	int other = 6-start-end;
	hanoi(n-1,start,other,moves);
	moves.push_back({start,end});
	hanoi(n-1,other,end,moves);
}


int main() {
	int n;
	cin>>n;
	vector<vector<int>> moves;
	hanoi(n,1,3,moves);
	cout<<moves.size()<<endl;
	for(auto it: moves) {
		cout<<it[0]<<" "<<it[1]<<endl;
	}
	return 0;
}