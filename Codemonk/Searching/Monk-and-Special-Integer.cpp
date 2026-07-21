#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &arr, int k, long long x) {
    long long sum = 0;

    // First window
    for (int i = 0; i < k; i++)
        sum += arr[i];

    if (sum > x)
        return false;

    // Sliding window
    for (int i = k; i < arr.size(); i++) {
        sum += arr[i];
        sum -= arr[i - k];

        if (sum > x)
            return false;
    }

    return true;
}

int main() {
    int n;
    long long x;
    cin >> n >> x;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 1, high = n;
    int ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (check(arr, mid, x)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << endl;
}