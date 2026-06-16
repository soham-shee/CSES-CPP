/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9+7;
const int inf = 1e18;

int calc(vector<int> x, int n){
    sort(x.begin(), x.end());
    int ans=0, sum=0;
    for(int i=0; i<n; i++){
        ans+=(x[i]*i-sum);
        sum+=x[i];
    }
    return ans;
}

void solve(){
    int n; cin>>n;
    vector<int> x(n), y(n);
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    cout<< calc(x, n) + calc(y, n);
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
