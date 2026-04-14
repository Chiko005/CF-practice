#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
        cin >> n;
        vector<int>a(n),b(n);
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        for(int i =0;i<n;i++){
            cin >> b[i];
        }
        int d = 0;
        for(int i = 0;i<n;i++){
            if(a[i] < b[i]){
                cout << "NO" <<endl;
                return;
            }
            d = max(d, a[i] - b[i]);
        }
        for(int i = 0;i<n;i++){
            if(b[i] != 0 && a[i] - b[i] != d){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
            
} 

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}