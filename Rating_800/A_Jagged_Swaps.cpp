//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    int mn=INT_MAX;
    vector<int>v(n);

    for(auto &u:v){
        cin>>u;
        mn=min(mn,u);
    }

    if(v[0]==mn) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
