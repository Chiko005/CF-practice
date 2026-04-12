#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k ;
        vector<int>a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        for(int i =0;i<k;i++){
            if(b[i] > a[i]) swap(a[i], b[i]);
            else break;
        }
        long long sum = 0;
        for(int i = 0; i < n; i++) sum += a[i];
        cout << sum << endl;
    }
    return 0;
}