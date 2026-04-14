#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    map<int,int> mp;
    for(int i =0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto v : mp){
        if(v.second > 2){
            cout << "NO" << endl;
            return;
        }
    }
    vector<int>p(n,-1),q(n,-1);
    map<int,int> used;
    for(int i =0;i<n;i++){
        int x = a[i];
        if(used[x] == 0) p[i] = x;
        else q[i] = x;
        used[x]++;
    }
    set<int> freeP, freeQ;
    for(int i = 1; i <= n; i++){
        freeP.insert(i);
        freeQ.insert(i);
    }

    for(int i = 0; i < n; i++){
        if(p[i] != -1) freeP.erase(p[i]);
        if(q[i] != -1) freeQ.erase(q[i]);
    }
    for(int i =0;i<n;i++){
        if(p[i] == -1){
            int x = q[i];
            auto it = freeP.lower_bound(x);
            if(it == freeP.begin()){
                cout << "NO" << endl;
                return;
            }
            it--;
            p[i] = *it;
            freeP.erase(it);
        }else{
            int x = p[i];
            auto it = freeQ.lower_bound(x);
            if(it == freeQ.begin()){
                cout << "NO" << endl;
                return;
            }   
            it--;
            q[i] = *it;
            freeQ.erase(it);
        }
    }
    cout << "YES" << endl;
    for(int x : p) cout << x << " ";
    cout << endl;
    for(int x : q) cout << x << " ";
    cout << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}