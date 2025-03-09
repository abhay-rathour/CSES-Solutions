//Two Knights
#include <bits/stdc++.h>
using namespace std;

long long calculate(int n){
    long long numways = 1LL*n*n*(n*n-1)/2;
    
    //Attack by first moving horizontal right then vertical(up and down) + Attack by first moving vertical then horzontal (left and right)
    // 2 ways in 2*3 and 2 ways in 3*2 subpart and number of such arrangement in n*n grid
    long long numwaysAttacking = 2LL*(n-1)*(n-2) + 2LL*(n-2)*(n-1);
    return numways-numwaysAttacking;
    
}

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<calculate(i)<<endl;
        i++;
    }
    

    return 0;
}