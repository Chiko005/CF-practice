#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ll left = -2e9, right = 2e9;
    while(n--){
        string op;
        ll num;
        char ans;
        cin >> op >> num >> ans;
        if(ans == 'N'){
            if(op == "<") op = ">=";
            else if(op == "<=") op = ">";
            else if(op == ">") op = "<=";
            else if(op == ">=") op = "<";
        }
        if(op == "<") right = min(right, num -1);
        else if(op == "<=") right = min(right, num);
        else if(op == ">") left = max(left, num + 1);
        else if(op == ">=") left = max(left, num);
    }
    if(left <= right) cout << left << endl;
    else cout << "Impossible" << endl;
    return 0;
}