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
        string str;
        cin >> n >> str;

        if(n == 2) {
            cout << 2 << "\n";
            continue;
        }

        unordered_set<char> str1;
        unordered_set<char> str2;

        str1.insert(str[0]);
        for(int i = 1; i < n; i++)
            str2.insert(str[i]);

        int maxValue = str1.size() + str2.size();

        for(int i = 0; i < (n-1); i++) {
            int possibleValue = str1.size() + str2.size();
            maxValue = max(maxValue, possibleValue);
            str1.insert(str[i+1]);
            str2.erase(str2.find(str[i+1]));
        }

        cout << maxValue << "\n";
    }

    return 0;
}