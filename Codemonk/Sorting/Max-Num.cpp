#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, l;
        cin >> n >> l;

        vector<int64> cnt(61, 0);

        for (int i = 0; i < n; i++) {
            int64 x;
            cin >> x;
            for (int b = 0; b <= 60; b++) {
                if (x & (1LL << b))
                    cnt[b]++;
            }
        }

        vector<pair<int64, int>> gain;

        for (int b = 0; b <= 60; b++) {
            gain.push_back({cnt[b] * (1LL << b), b});
        }

        sort(gain.begin(), gain.end(),
             [](auto &a, auto &b) {
                 if (a.first != b.first)
                     return a.first > b.first;
                 return a.second < b.second;
             });

        int positive = 0;
        for (auto &x : gain)
            if (x.first > 0)
                positive++;

        // Infinite answers
        if (l > positive) {
            cout << -1 << "\n";
            continue;
        }

        // If no bits are chosen
        if (l == 0) {
            cout << 1 << "\n";
            continue;
        }

        int64 border = gain[l - 1].first;

        int total = 0;
        int need = 0;

        for (auto &x : gain) {
            if (x.first == border)
                total++;
        }

        for (int i = 0; i < l; i++) {
            if (gain[i].first == border)
                need++;
        }

        // Compute C(total, need)
        int64 ans = 1;
        for (int i = 1; i <= need; i++) {
            ans = ans * (total - need + i) / i;
        }

        cout << ans << "\n";
    }

    return 0;
}