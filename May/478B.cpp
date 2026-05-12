#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    ll q = n / m;
    ll r = n % m;

    ll mini = (m - r) * q * (q - 1) / 2
            + r * (q + 1) * q / 2;

    ll t = n - m + 1;
    ll maxi = t * (t - 1) / 2;

    cout << mini << " " << maxi << '\n';

    return 0;
}