/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

int calc(int i, vector<int> &p, int sum1, int sum2, int n){
    if (i==n) return abs(sum1-sum2);
    int choose = calc(i+1, p, sum1+p[i], sum2, n);
    int not_choose = calc(i+1, p, sum1, sum2+p[i], n);

    return min(choose,not_choose);
}

void solve(){
    int n; cin>>n;
    vector<int> p(n);
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    cout<<calc(0, p, 0, 0, n);
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
