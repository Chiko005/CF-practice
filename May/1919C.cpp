#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int ans = 0;
    int x = INT_MAX, y = INT_MAX;
    for(int i = 0;i<n;i++){
        if(x > y) swap(x,y);
        // case 1
        if(arr[i] <= x) x = arr[i];
        // case 3
        else if(arr[i] <= y) y = arr[i];
        //case 2
        else{
            x = arr[i];
            ans++;
        }
    }
    cout << ans << "\n";
}

int main(){
    cin.sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}