/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    int sum=n*(n+1)/2;
    int ans;
    if (sum%2==1){
        cout<<"NO"<<endl;
        return;
    }
    else{
        ans=sum/2;
    }
    vector<int> a, b;
    for(int i=n; i>=1; i--){
        if (i<=ans){
            a.push_back(i);
            ans-=i;
        }
        else{
            b.push_back(i);
        }
    }
    cout<<"YES"<<endl;
    cout<<a.size()<<endl;
    for(auto i: a){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<b.size()<<endl;
    for(auto i: b){
        cout<<i<<" ";
    }
    cout<<endl;
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
