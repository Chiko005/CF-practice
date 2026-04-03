#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int c0 = 0, c1 = 0;
    for (char c : s) {
        if (c == '0') c0++;
        else c1++;
    }
    int length = 0;
    for(char c : s){
        if(c=='0' and c1 > 0){
            length++;
            c1--;
        }else if(c=='1' and c0 > 0){
            length++;
            c0--;
        }else break;
    }
    cout << s.size() - length << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}