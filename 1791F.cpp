#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

// Solución que da TLE
void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++) cin >> arr[i];

    for(int i = 0; i < q; i++) {
        int opt;
        cin >> opt;
        if(opt == 1) {
            int l, r;
            cin >> l >> r;            
            for(int j = l; j <= r; j++) {                                
                arr[j] = sumOfDigits(arr[j]);
            }
        }
        if(opt == 2) {
            int x;
            cin >> x;
            cout << arr[x] << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;    

    while(t--) solve();

    return 0;
}