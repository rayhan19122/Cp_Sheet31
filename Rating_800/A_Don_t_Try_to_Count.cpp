//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int x,y;
    cin>>x>>y;
    string a,b,longStr;
    cin>>a>>b;

    longStr=a;

    bool got=false;

    for(int i=0;i<6;i++){
        if(longStr.find(b)!=-1){
            cout<<i<<endl;
            got = true;
            break;
        }
        longStr+=longStr;
    }
    if(!got) cout<<-1<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
