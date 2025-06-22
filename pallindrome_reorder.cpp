/*
Author : tpibn
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin>>s;

    unordered_map<char,int> freq;
    for(char c:s){
        freq[c]++;
    }

    int oddCount=0;
    char oddChar='\0';
    string halfPalindrome="";
    for (auto &entry:freq) {
        if (entry.second%2!=0) {
            oddCount++;
            oddChar=entry.first;
        }
        halfPalindrome+=string(entry.second / 2, entry.first);
    }
    if(oddCount>1) {
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    string fullPalindrome=halfPalindrome;
    if (oddCount==1){
        fullPalindrome+=oddChar;
    }
    fullPalindrome+=string(halfPalindrome.rbegin(),halfPalindrome.rend());

    cout<<fullPalindrome<<endl;
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
