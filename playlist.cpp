/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    set<int> s;
    for(int i=0; i<n; i++){
        cin >> v[i];
        s.insert(v[i]);
    }
    int ans=0;
    if (s.size()==n) {
        ans=n;
    }
    else{
        unordered_map<int,int> m;
        int i=0,j=0;
        while(j<n){
            m[v[j]]++;
            while(m[v[j]]>1){
                m[v[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
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
