#include <bits/stdc++.h>
using namespace std;

// Editorial Solution, using frecuency vector, my solution using set isnt work
void solve() {
    int n, ans = 0; string s;
    cin >> n >> s;    
    
    vector<int> cnt(26,0), p(26,0);
    for(auto x: s) cnt[x - 'a']++;

    for(auto x: s) {
        --cnt[x - 'a'];
        ++p[x - 'a'];
        int cur = 0;
        for(int i = 0; i < 26; ++i) {
            cur += min(1, cnt[i]) + min(1, p[i]);
        }
        ans = max(ans, cur);
    }

    cout << ans << "\n";
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