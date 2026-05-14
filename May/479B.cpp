#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<pair<int, int>> ans;

    for (int i = 0; i < k; i++) {
        int max_idx = max_element(a.begin(), a.end()) - a.begin();
        int min_idx = min_element(a.begin(), a.end()) - a.begin();

        if (a[max_idx] - a[min_idx] == 0) break;
        a[max_idx]--;
        a[min_idx]++;
        ans.push_back({max_idx + 1, min_idx + 1});
        max_idx = max_element(a.begin(), a.end()) - a.begin();
        min_idx = min_element(a.begin(), a.end()) - a.begin();
        if (a[max_idx] - a[min_idx] == 0) break;
    }

    int final_max = *max_element(a.begin(), a.end());
    int final_min = *min_element(a.begin(), a.end());

    cout << final_max - final_min << " " << ans.size() << "\n";
    for (auto it : ans) {
        cout << it.first << " " << it.second << "\n";
    }

    return 0;
}