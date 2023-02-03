#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        string word;
        cin >> word;

        if(word.length() > 10) {
            cout << word[0];
            cout << word.length()-2;
            cout << word[word.length()-1] << "\n";
        }
        else {
            cout << word << "\n";
        }
    }

    return 0;
}