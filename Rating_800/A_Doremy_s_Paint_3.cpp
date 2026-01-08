//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(auto &u:v) {cin>>u;mp[u]++;}

    int x=v[0];
    int y;
    int fx=0,fy=0;

    if(mp.size()==1){cout<<"Yes"<<endl;return;}

    for(auto u:v){if(u!=x)y=u;break;}
    if(mp.size()>2)cout<<"No"<<endl;
    else{
        for(auto u:mp){
            if(u.first==x) fx=u.second;
            else fy=u.second;
        }
        if((abs(fx-fy)==1) || (fx==fy)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    // // Get the frequency of the smallest and largest elements
    //         long long freq_1 = mp.begin()->second;
    //         long long freq_2 = mp.rbegin()->second;

    //cout<<mp[3]<<endl;
    

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
