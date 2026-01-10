//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,x;
    cin>>n>>x;

    vector<int>v(n);
    map<int,int>mp;

    for(auto &u:v){cin>>u;mp[u]++;}

    if(mp[x]>=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
