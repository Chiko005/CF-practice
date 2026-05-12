#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> a(n);
    ll total_sum = 0;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        total_sum += a[i];
    }
    if(total_sum % 3 != 0){
        cout << 0 << endl;
        return 0;
    }
    ll target = total_sum / 3;
    ll first_cut = 0, ways = 0;
    ll current_sum = 0;
    for(int i = 0;i<n-1;i++){
        current_sum += a[i];
        if(i > 0 && current_sum == 2 * target){
            ways += first_cut;
        }
        if(current_sum == target){
            first_cut++;
        }
    }
    cout << ways << endl;

    return 0;
}