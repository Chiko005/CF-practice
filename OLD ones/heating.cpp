#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int c,sum;
        cin >> c >> sum;
        int q = sum / c;
        int r = sum % c;
        int ans = r * (q + 1) * (q + 1) + (c - r) * q * q;
        cout << ans << endl;
    }
    return 0;
}