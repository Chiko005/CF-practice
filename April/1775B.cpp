#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        unordered_map<int,int>mp;
        vector<vector<int>>arr(n);
        for(int i =0;i<n;i++){
            int k;
            cin >> k;
            set<int>s;
            while(k--){
                int x;
                cin >> x;
                s.insert(x);
            }
            for(auto x : s){
                mp[x]++;
            }
            arr[i] = vector<int>(s.begin(),s.end());
        }
        bool found = false;
        for(auto &a : arr){
            bool ok = true;
            for(auto &x : a){
                if(mp[x] == 1){
                    ok = false;
                    break;
                }
            }
            if(ok){
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << endl;

    }
    return 0;
}