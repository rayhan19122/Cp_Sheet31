//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int cnt=0;
    if(s.find("...")!=-1){
        cout<<2<<endl;
        return;
    }
    else {
        for(auto u:s){
            if(u=='.') cnt++;
        }
    }
    cout<<cnt<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
