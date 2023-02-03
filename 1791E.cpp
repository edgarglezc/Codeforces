#include <bits/stdc++.h>
using namespace std;

int sumOfArray(vector<int> arr) {
    int sum = 0;
    for(auto n : arr) {
        sum += n;
    }
    return sum;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxSum = sumOfArray(arr);

        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i] * -1;
            arr[i+1] = arr[i+1] * -1;

            int newSum = sumOfArray(arr);
            maxSum = max(maxSum, newSum);

            if(newSum <= maxSum) {
                arr[i] = arr[i] * -1;
                arr[i+1] = arr[i+1] * -1;
            }
        }

        cout << maxSum << "\n";
    }

    return 0;
}