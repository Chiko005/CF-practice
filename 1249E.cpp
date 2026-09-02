#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,c;
    cin >> n >> c;
    vector<int>a(n-1);
    vector<int>b(n-1);
    for(int i = 0;i<n-1;i++) cin >> a[i];
    for(int i = 0;i<n-1;i++) cin >> b[i];
    vector<int>dpstr(n,1e9);
    vector<int>dpele(n,1e9);
    dpstr[0] = 0;
    dpele[0] = c;
    for(int i = 1;i<n;i++){
        dpstr[i] = min(dpstr[i],dpstr[i-1] + a[i-1]); // str - str
        dpstr[i] = min(dpstr[i],dpele[i-1] + a[i-1]); // ele - str
        dpele[i] = min(dpele[i],dpele[i-1] + b[i-1]); // ele - ele
        dpele[i] = min(dpele[i],dpstr[i-1] + b[i-1] + c); // str - ele
    }
    for(int i = 0;i<n;i++){
        cout << min(dpstr[i],dpele[i]) << " ";
    }
    
    return 0;
}