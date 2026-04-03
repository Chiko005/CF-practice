#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    int n;
    cin >> n;
    vector<int>second_elements;
    int lowest_first = INT_MAX;
    for(int i=0;i<n;i++){
        int size;
        cin >> size;
        vector<int>a(size);
        for(auto&x :a){
            cin >> x;
        }
        sort(a.begin(),a.end());
        second_elements.push_back(a[1]);
        lowest_first = min(lowest_first,a[0]);
    }
    sort(second_elements.begin(),second_elements.end());
    ll second_sum = accumulate(second_elements.begin(),second_elements.end(),0LL);
    ll ans = second_sum - second_elements[0] + lowest_first;
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}