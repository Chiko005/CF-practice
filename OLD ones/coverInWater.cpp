#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,count =0;
    bool consecutive = false;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        if(s[i] == '.' and i+1 < n and s[i+1] == '.' and i+2 < n and s[i+2] == '.') {
            consecutive = true;
            break;
        }
        if(s[i] == '.') count++;
    }
    if(consecutive) cout << 2 << endl;
    else cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}