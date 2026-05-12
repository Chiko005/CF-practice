#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<int>a(m);
    for(int i=0;i<m;i++) cin >> a[i];
    int curr = 1;
    ll time = 0;
    for(int i = 0;i<m;i++){
        if(a[i] >= curr){
            time += a[i] - curr;
        }else{
            time += n - (curr - a[i]);
        }
        curr = a[i];
    }
    cout << time << endl;
    return 0;
}