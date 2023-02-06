#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n); 
    int negs = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] < 0) {
            negs++;
            arr[i] = abs(arr[i]);
        }
        sum += arr[i];
    }    
    sort(arr.begin(), arr.end());
    if(negs & 1) {
        sum -= (arr[0]*2);
    }
    cout << sum << "\n";
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