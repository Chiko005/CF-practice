#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());
    for(int i =1;i<n;i++){
        if(arr[i] - arr[i-1] > 1){
            cout << "NO" <<endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}