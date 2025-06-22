/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s; cin>>s;
    int n=s.size();
    char c=s[0];
    int count=1;
    int ans=1;
    for(int i=1; i<n; i++){
        if (s[i]==c){
            count++;
        }
        else{
            ans=max(ans, count);
            c=s[i];
            count=1;
        }
    }
    ans=max(ans, count);
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
