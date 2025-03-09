//Gray Code
#include <bits/stdc++.h>
using namespace std;



int main()
{
	int n;
	cin>>n;

	for(int i=0; i<(1<<n); i++) {
		int corresponding_gray = i^(i>>1);
		string code ="";
		for(int j=n-1; j>=0; j--) {
			code+=(corresponding_gray&(1<<j))? '1':'0';
		}
		cout<<code<<endl;
	}

	return 0;
}