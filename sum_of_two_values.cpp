/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x; cin>>n>>x;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    map<int,int> m;
    for(int i=0; i<n; i++){
        if (m.count(x-v[i])){
            cout<<i+1<<" "<<m[x-v[i]]<<endl;
            return;
        }
        m[v[i]]=i+1;
    }
    cout<<"IMPOSSIBLE";
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
