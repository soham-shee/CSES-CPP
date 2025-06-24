/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x; cin>>n>>x;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int i=0, j=n-1;
    int count=0;
    vector<bool> have(n, false);
    while(i<j){
        int g=v[i]+v[j];
        if (g>x){
            j--;
        }
        else {
            count++;
            have[i]=have[j]=1;
            i++;
            j--;
        }
    }

    for(int i=0; i<n; i++){
        count+=(have[i]==0);
    }
    cout<<count;
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
