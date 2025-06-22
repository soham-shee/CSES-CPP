/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    if (n==2 || n==3) {
        cout<<"NO SOLUTION";
        return;
    }
    else{
        for(int i=2; i<=n; i+=2){
            cout<<i<<" ";
        }
        for(int i=1; i<=n; i+=2){
            cout<<i<<" ";
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
    // cin>>t;
    t=1;
    while(t--) solve();
}
