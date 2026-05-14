#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    ll sec = a[0];
    for(int i = 1;i<n;i++){
        if(a[i] < a[i-1]){
            sec += a[i-1] - a[i];
        }else{
            sec += a[i] - a[i-1];
        }
    }
    sec += 2 * n - 1;
    cout << sec << "\n";

    return 0;
}