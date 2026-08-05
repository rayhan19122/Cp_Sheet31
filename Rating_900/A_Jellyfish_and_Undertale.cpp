//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a,b,n;
    cin>>a>>b>>n;

    vector<int>v(n);
    for(auto &u:v) cin>>u;
    int ans=b;
    for(int i=0;i<n;i++){
        ans+=min(a-1,v[i]);
    }
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
