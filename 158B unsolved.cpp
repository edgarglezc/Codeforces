#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> groups;
    int n, taxis = 0;
    cin >> n;

    groups[1] = 0;
    groups[2] = 0;
    groups[3] = 0;
    groups[4] = 0;

    while(n--) {
        int x;
        cin >> x;
        groups[x]++;
    }

    taxis += groups[4];

    



    return 0;
}