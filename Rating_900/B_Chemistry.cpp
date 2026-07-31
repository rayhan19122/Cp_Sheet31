//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    map<char,int>mp;
    for(auto u:s) mp[u]++;
    
    int odd_freq=0; int even_freq=0;
    for(auto u:mp){
        if(u.second%2) odd_freq++;
        else even_freq++;
    }
    if(odd_freq>k+1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
