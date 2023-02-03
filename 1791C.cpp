#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        int i = 0, j = s.length()-1;

        for(int i = 0, j = s.length()-1; i < j; i++, j--) {
            if(s[i] != s[j]) n -= 2;
            else break;
        }

        cout << n << "\n";
    }

    return 0;
}