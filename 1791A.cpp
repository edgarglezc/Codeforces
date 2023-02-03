#include <bits/stdc++.h>
using namespace std;

const string cf = "codeforces";

void solve() {
    char c;
    cin >> c;

    if(cf.find(c) != string::npos) 
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;    

    while(t--) solve();

    return 0;
}