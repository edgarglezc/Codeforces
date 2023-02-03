#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while(t--) {
        string moves;
        int n;
        cin >> n >> moves;
        bool passed = false;
        int x = 0, y = 0;

        for(auto m : moves) {
            if(m == 'L') {
                x--;
            }
            else if(m == 'R'){
                x++;
            }
            else if(m == 'U') {
                y++;
            }
            else {
                y--;
            }

            if(x == 1 && y == 1) {
                passed = true;
                break;
            }
        }
        
        if(passed) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}