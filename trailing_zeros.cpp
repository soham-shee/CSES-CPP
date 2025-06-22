/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    if (n<0) cout<<"-1";
    else{
        int count=0;
        for(int i=5; n/i>=1; i*=5){
            count+=n/i;
        }
        cout<<count;
    }
}

#undef int
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.in", "r", stdin);
    //freopen("output.out", "w", stdout);
    int t;
    // cin>>t;
    t=1;
    while(t--) solve();
}
