//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &u:v) cin>>u;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(__gcd(v[i],v[j])<=2){
                flag=true;
                break;
            }
        }
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
