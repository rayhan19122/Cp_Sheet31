//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    set<int>st;

    for(auto &u:v) cin>>u;
    st.insert(v[0]-0);
    st.insert((x-v[n-1])*2);
    for(int i=1;i<n;i++) st.insert(v[i]-v[i-1]);

    cout<<*(--st.end())<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
