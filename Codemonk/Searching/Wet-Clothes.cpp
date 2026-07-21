#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, g;
    cin >> n >> m >> g;

    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    int res = 0;
    int max_dry = 0;

    // Find the maximum difference between consecutive elements of t
    for (int i = 1; i < n; i++) {
        max_dry = max(max_dry, t[i] - t[i - 1]);
    }

    // Count elements in a that are <= max_dry
    for (int i = 0; i < m; i++) {
        if (a[i] <= max_dry) {
            res++;
        }
    }

    cout << res << endl;

    return 0;
}