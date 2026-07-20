#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        int res = 0;
        int mn = -1;
        int current_freq = 0;

        for (int i = 0; i < n; i++) {
            if (i != n - 1 && arr[i] == arr[i + 1]) {
                current_freq++;
            } else {
                current_freq++;

                if (mn == -1) {
                    mn = current_freq;
                } else {
                    if (mn > current_freq) {
                        mn = current_freq;
                    } else {
                        res = max(res, current_freq - mn);
                    }
                }

                current_freq = 0;
            }
        }

        if (res > 0)
            cout << res << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}