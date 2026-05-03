#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<int,int>mp;
        mp[0] = 1;
        long long ans = 0, sum = 0;
        for(int i =0;i<n;i++){
            sum += (s[i] - '0' -1);
            ans += mp[sum];
            mp[sum]++;
        }
        cout << ans << endl;
    }
    return 0;
}