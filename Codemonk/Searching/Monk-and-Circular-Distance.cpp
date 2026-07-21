#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<__int128> dist;

    for (int i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
        dist.push_back((__int128)x * x + (__int128)y * y);
    }

    sort(dist.begin(), dist.end());

    int q;
    cin >> q;

    while (q--) {
        long long r;
        cin >> r;

        __int128 rr = (__int128)r * r;

        cout << upper_bound(dist.begin(), dist.end(), rr) - dist.begin() << '\n';
    }
}