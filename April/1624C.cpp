#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n),have(n+1,0);
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr.rbegin(),arr.rend());
        int ok = true;
        for(int i = 0;i<n;i++){
            while(arr[i] > n || have[arr[i]] == 1) arr[i] /= 2;
            if(arr[i] > 0) have[arr[i]] = 1;
            else ok = false;
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}