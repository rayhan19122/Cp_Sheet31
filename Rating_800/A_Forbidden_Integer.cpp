//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,k,x;
    cin>>n>>k>>x;
    int cAse=0;
    if(x!=1){
        cAse=1;
    }else{
        if(n>=2 && k>=2){
            if(n%2==0) cAse=2;
            else{
                if(k>=3) cAse=3;
            }
        }
    }
    switch (cAse)
    {
    case 0:
        cout<<"NO"<<endl;
        break;
    case 1:
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=1;i<=n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        break;
    case 2:
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        for(int i=1;i<=n/2;i++){
            cout<<2<<" ";
        }  
        cout<<endl;
        break;
    case 3:
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        for(int i=1;i<=(n/2)-1;i++){
            cout<<2<<" ";
        }
        cout<<3<<endl;
        break;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
