#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cost = 0;
    vector<int>freq(26,0);
    for(int i=0;i<n;i++){
        if(freq[s[i] - 'A'] == 0) cost+=2;
        else cost += 1;
        freq[s[i] - 'A']++;
    }
    cout << cost  <<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}