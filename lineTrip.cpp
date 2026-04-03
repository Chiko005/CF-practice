#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    int prev = 0;
    int maxi = 0;
    
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        maxi = max(maxi, curr - prev);
        prev = curr;
    }
    maxi = max(maxi, 2 * (x - prev));
    
    cout << maxi << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}