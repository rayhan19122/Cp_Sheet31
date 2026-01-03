//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool is_sorted(vector<int>&v){
    for (int i = 0; i < v.size()-1; i++)
    {
        if(v[i]>v[i+1]) return false;
    }
    return true; 
}

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &u:v) cin>>u;

    if(is_sorted(v)){
        cout<<"YES"<<endl;
    }
    else {
        if(k>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
