//Palindrome Reorder
#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin>>s;
	int n = s.length();
	vector<int> f(26,0);

	for(int i=0; i<n; i++) {
		f[s[i]-'A']++;
	}

	int mid =n/2;
	int curPos=0;
	int oddCount=0;
	for(int i=0; i<26; i++) {
		if(f[i]%2==1) {
			oddCount++;
			if(oddCount>1) {
				cout<<"NO SOLUTION"<<endl;
				return 0;
			}
			s[mid]='A'+i;
			f[i]--;
		}
		while(f[i]>0) {
			s[curPos]='A'+i;
			s[n-1-curPos]='A'+i;
			curPos++;
			f[i]--;
			f[i]--;
		}
	}
	cout<<s<<endl;

	return 0;
}