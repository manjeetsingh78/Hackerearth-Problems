#include <bits/stdc++.h>
using namespace std;

struct Spider {
    int power;
    int index;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X;
    cin >> N >> X;

    queue<Spider> q;

    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;
        q.push({x, i});
    }

    for (int it = 0; it < X; it++) {

        vector<Spider> temp;

        int cnt = min(X, (int)q.size());

        int mx = -1;
        int pos = -1;

        for (int i = 0; i < cnt; i++) {
            temp.push_back(q.front());
            q.pop();

            if (temp[i].power > mx) {
                mx = temp[i].power;
                pos = i;
            }
        }

        cout << temp[pos].index << " ";

        for (int i = 0; i < cnt; i++) {
            if (i == pos)
                continue;

            if (temp[i].power > 0)
                temp[i].power--;

            q.push(temp[i]);
        }
    }

    return 0;
}