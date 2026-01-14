//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    set<int>st;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
        int x=abs(v[i]);
        st.insert(x);
    }
    cout<<*(st.begin())<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //int t; cin >> t;
    //while (t--) 
    solve();
    return 0;
}
