#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string moves;
    cin >> n >> moves;
    int x = 0, y = 0;
    for(auto m : moves) {
        if(m == 'L') x--;
        if(m == 'R') x++;            
        if(m == 'U') y++;
        if(m == 'D') y--;
        if(x == 1 && y == 1) {cout << "YES\n"; return;}
    }
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);    

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}