/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<vector<int>> v(n, vector<int> (n, 0));
    for(int i=0; i<n; i++){
        v[0][i]=i;
        v[i][0]=i;
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
