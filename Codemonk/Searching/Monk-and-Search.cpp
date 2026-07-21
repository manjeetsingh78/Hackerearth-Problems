#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int q;
    cin >> q;

    while(q--) {
        int type, x;
        cin >> type >> x;

        if(type == 0) {
            int pos = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
            cout << n - pos << endl;
        }
        else {
            int pos = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
            cout << n - pos << endl;
        }
    }
}