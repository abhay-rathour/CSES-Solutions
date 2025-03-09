//Creating Strings
#include <bits/stdc++.h>
using namespace std;



void solve(string S, set<string> &ans) {
	int N = S.length();
	sort(S.begin(), S.end());

	do {
		ans.insert(S);
	} while (next_permutation(S.begin(), S.end()));
}

int main() {
	string s;
	cin>>s;
	set<string> ans;
	solve(s,ans);
	cout<<ans.size()<<endl;
	for(auto it: ans) {
		cout<<it<<endl;
	}
	return 0;
}