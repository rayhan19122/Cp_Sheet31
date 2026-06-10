//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    char grid[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> grid[i][j];
        }
    }
    
    int pts1 = 0, pts2 = 0, pts3 = 0, pts4 = 0, pts5 = 0;
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(grid[i][j] == 'X'){
                if(i == 0 || j == 0 || i == 9 || j == 9) {
                    pts1++;
                }
                else if(i == 1 || j == 1 || i == 8 || j == 8) {
                    pts2++;
                }
                else if(i == 2 || j == 2 || i == 7 || j == 7) {
                    pts3++;
                }
                else if(i == 3 || j == 3 || i == 6 || j == 6) {
                    pts4++;
                }
                else if(i == 4 || j == 4 || i == 5 || j == 5) {
                    pts5++;
                }
            }
        }
    }
    cout << pts1 * 1 + pts2 * 2 + pts3 * 3 + pts4 * 4 + pts5 * 5 << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
