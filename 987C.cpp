#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int>font(n),cost(n);
    for(int i = 0;i<n;i++) cin >> font[i];
    for(int i = 0;i<n;i++) cin >> cost[i];
    int ans = 1e9;
    for(int j = 1;j<n-1;j++){
        int min_left = 1e9;
        int min_right = 1e9;
        for(int i = 0;i<j;i++){
            if(font[i] < font[j]){
                min_left = min(min_left,cost[i]);
            }
        }
        for(int i = j+1;i<n;i++){
            if(font[i] > font[j]){
                min_right = min(min_right,cost[i]);
            }
        }
        if(min_left != 1e9 && min_right != 1e9){
            int current_cost = min_left + min_right + cost[j];
            ans = min(ans,current_cost);
        }
    }
    cout << (ans == 1e9 ? -1 : ans) << "\n";
    return 0;
}