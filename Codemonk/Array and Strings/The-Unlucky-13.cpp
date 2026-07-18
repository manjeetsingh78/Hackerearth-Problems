#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000009;

unordered_map<long long, long long> cache;

long long ans(long long n) {
    if (cache.find(n) != cache.end()) {
        return cache[n];
    }

    if (n == 0) {
        cache[n] = 1;
        return cache[n];
    }

    if (n == 1) {
        cache[n] = 10;
        return cache[n];
    }

    long long x = ans(n / 2);
    long long y = ans(n / 2 - 1);

    if (n % 2 == 0) {
        cache[n] = (x * x - y * y) % mod;
    } else {
        long long z = ans(n / 2 + 1);
        cache[n] = (x * (z - y)) % mod;
    }

    if (cache[n] < 0) {
        cache[n] += mod;
    }

    return cache[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        cout << ans(n) << '\n';
    }

    return 0;
}
