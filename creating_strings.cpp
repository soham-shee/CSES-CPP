/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    set<string> permutations;
    permutations.insert(s);
    while (next_permutation(s.begin(), s.end())){
        permutations.insert(s);
    }
    cout << permutations.size() << endl;
    for (auto perm : permutations) {
        cout << perm << endl;
    }
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
