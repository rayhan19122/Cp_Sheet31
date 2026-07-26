//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a,b;
    cin>>a>>b;
    int k_x,k_y,q_x,q_y;
    cin>>k_x>>k_y;
    cin>>q_x>>q_y;

    set<pair<int,int>>king,queen;

    int dx[4]={1,-1,1,-1}, dy[4]={1,-1,-1,1};

    for (int i = 0; i < 4; i++)
    {
        king.insert({k_x+a*dx[i],k_y+b*dy[i]});
        king.insert({k_x+b*dx[i],k_y+a*dy[i]});
        
        queen.insert({q_x+b*dx[i],q_y+a*dy[i]});
        queen.insert({q_x+a*dx[i],q_y+b*dy[i]});

    }
    int ans=0;
    for (auto x:king)
    {
        if(queen.find(x)!=queen.end()) ans++;
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
