/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long


int calc(int n, int i){
    if (n==0) return i;
    if (n%10==0){
        return calc(n-2, i+1);
    }
    n=n/10;
    n*=10;
    return calc(n, i+1);
}

void solve(){
    int n;
    cin>>n;
    cout<< calc(n, 0);
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
