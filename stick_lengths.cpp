/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    sort(v.begin(),v.end());
    int med1=v[n/2];
    int med2=v[n/2-1];
    int cost1=0;
    int cost2=0;
    for(int i=0; i<n; i++){
        cost1+=abs(v[i]-med1);
        cost2+=abs(v[i]-med2);
    }
    cout<<min(cost1,cost2);
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
