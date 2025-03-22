#include <bits/stdc++.h>
using namespace std;
int N =8;
vector<vector<bool>> inp(N,vector<bool>(N,false));
vector<vector<bool>> chessboard(N,vector<bool>(N,false));
long long ans =0;

bool isValidFill() {
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			if(inp[i][j]&&chessboard[i][j]) {
				return false;
			}
		}
	}
	return true;
}

bool possible(int r, int c) {
	for(int i =0; i<N; i++) {
		if(chessboard[r][i]||chessboard[i][c]) {
			return false;
		}
	}

	for(int i=0; r-i>=0&&c-i>=0; i++) {
		if(chessboard[r-i][c-i]) {
			return false;
		}
	}
	for(int i=0; r-i>=0&&c+i>=0; i++) {
		if(chessboard[r-i][c+i]) {
			return false;
		}
	}

	return true;
}


void fill(int r) {
	if(r==N) {
		if(isValidFill()) {
			ans++;
		}
		return;
	}
	for(int c=0; c<N; c++) {
		if(possible(r,c)) {
			chessboard[r][c]=true;
			fill(r+1);
			chessboard[r][c]=false;
		}
	}
}

int main() {
	int k=0;
	while(k<8) {
		string x;
		cin>>x;
		for(int i=0; i<x.length(); i++) {
			if(x[i]=='*') {
				inp[k][i]=true;
			}
		}
		k++;
	}
	fill(0);
	cout<<ans;

	return 0;
}