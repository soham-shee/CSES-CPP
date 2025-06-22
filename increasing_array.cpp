/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n; int mxm=0, ans=0;
    for(int i=0; i<n; i++){
        int temp; cin>>temp;
        mxm=max(mxm,temp);
        ans+=mxm-temp;
    }
    cout<<ans;
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
