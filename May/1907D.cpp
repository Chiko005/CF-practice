#include<bits/stdc++.h>
using namespace std;

int segStart[200000], segEnd[200000];
bool isReachable(int mid, int n){
    int currMaxPos = 0;
    int currMinPos = 0;
    for(int i =0;i<n;i++){
        currMaxPos += mid;
        currMinPos -= mid;
        int reachableStart = max(currMinPos,segStart[i]);
        int reachableEnd = min(currMaxPos,segEnd[i]);
        if(reachableStart > reachableEnd) return false;
        currMaxPos = reachableEnd;
        currMinPos = reachableStart;
    }
    return true;
}


void solve(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> segStart[i] >> segEnd[i];
    }
    int low = 0, high = 1e9;
    while(low < high){
        int mid = low + (high - low) / 2;
        if(isReachable(mid, n)){
            high = mid;
        }
        else low = mid + 1;
    }
    cout << low << endl;
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