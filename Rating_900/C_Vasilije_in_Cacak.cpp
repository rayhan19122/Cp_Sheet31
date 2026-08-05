//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,k,x;
    cin>>n>>k>>x;

    int p=n-k;
    int s=(n*(n+1))/2;
    int t=(p*(p+1))/2;
    int v=(k*(k+1))/2;
    int u=s-t;
    if(u>=x && x>=v) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
