#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());
    int ans = -1;
    for(int i = 0;i<n;i++){
        if(ans <= a[i].second){
            ans = a[i].second;
        }else{
            ans = a[i].first;
        }
    }
    cout << ans << "\n";
    return 0;
}