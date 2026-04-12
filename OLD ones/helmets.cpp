#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    ll p;
    cin >> n >> p;
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++) v[i] = {b[i],a[i]};
    sort(v.begin(),v.end());
    ll minCost = p;
    ll people = 1;
    for(auto it:v){
        ll cost  = it.first;
        ll canShare = it.second;
        if(cost >= p) break;
        if(people + canShare > n){
            minCost += (n - people)*cost;
            people = n;
            break;
        }else{
            minCost += canShare*cost;
            people+=canShare;
        }
    }
    minCost+= (n - people) * p;
    cout << minCost << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}