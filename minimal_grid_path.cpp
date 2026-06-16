/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

bool isOk(int i, int j, int n){
    return ((i>=0 || i<n) && (j>=0 || j<n));
}

void solve(){
    int n; cin>>n;
    vector<vector<char>> grid(n, vector<char> (n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>grid[i][j];
        }
    }
    int i=0, j=0;
    int ans="";
    while(i<n && j<n){
        if (i==0 && j==0) ans=grid[i][j];
        if (isOk(i+1,j+1,n)){
            ans=min(ans+grid[i][j+1], ans+grid[i+1][j]);
        }
    }

}

#undef int
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.in", "r", stdin);
    //freopen("output.out", "w", stdout);
    int t;
    cin>>t;
    // t=1;
    while(t--) solve();
}
