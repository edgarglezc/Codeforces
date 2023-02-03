#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int t; 
    cin >> t;
    string cf = "codeforces";

    while(t--) {
        char c;
        cin >> c;

        if(cf.find(c) != string::npos) 
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";

    }

    return 0;
}