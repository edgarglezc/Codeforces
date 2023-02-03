#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, p = 0;
    cin >> n >> k;
    k -= 1;
    int scores[n];

    for(int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    for(int i = 0; i < n; i++) {
        if(scores[i] != 0 && scores[i] >= scores[k]) p++;
    }

    cout << p;
    
    return 0;
}