//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a,k,b;
    cin>>a>>k>>b;
    int who=0;
    if(b%2) who=2;
    else who =1;

    if(who==2){
        if(k>a) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }else{
        if(a>k) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
