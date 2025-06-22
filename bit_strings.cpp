/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

int binpow(int a, int b, int mod){
    a%=mod;
    int ans=1;
    while(b){
        if (b&1){
            ans=ans*a%mod;
        }
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}

void solve(){
    int n; cin>>n;
    int mod=1e9+7;
    cout<<binpow(2,n,mod);
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
