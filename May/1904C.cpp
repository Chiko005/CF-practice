#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (k >= 3) {
        cout << 0 << '\n';
        return;
    }

    vector<long long> diff;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            diff.push_back(abs(arr[i] - arr[j]));
        }
    }

    sort(diff.begin(), diff.end());

    long long ans = LLONG_MAX;

    for (auto x : arr) ans = min(ans, x);

    if (!diff.empty()) ans = min(ans, diff[0]);

    if (k == 1) {
        cout << ans << '\n';
        return;
    }

    for (auto x : arr) {
        auto it = lower_bound(diff.begin(), diff.end(), x);

        if (it != diff.end()) {
            ans = min(ans, abs(x - *it));
        }

        if (it != diff.begin()) {
            --it;
            ans = min(ans, abs(x - *it));
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}