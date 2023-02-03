#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, problems = 0;
    cin >> n;

    while(n--) {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        if((n1+n2+n3) > 1) problems++;
    }

    cout << problems;
    
    return 0;
}