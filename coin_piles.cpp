/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b;
    cin>>a>>b;
    int x=2*b-a;
    int y=2*a-b;
    if (x>=0 && y>=0 && x%3==0 && y%3==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
