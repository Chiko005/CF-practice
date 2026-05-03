#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int digitCount = 0;
    int trailingZeros[n]{};
    for(int i =0;i<n;i++){
        while(arr[i] % 10 == 0){
            trailingZeros[i]++;
            arr[i] /= 10;
            digitCount++;
        }
        while(arr[i] > 0){
            arr[i] /= 10;
            digitCount++;
        }
    }
    sort(trailingZeros,trailingZeros+n,greater<int>());
    for(int i = 0;i<n;i+=2){
        digitCount -= trailingZeros[i];
    }
    if(digitCount > m) cout << "Sasha\n";
    else cout << "Anna\n";
}
 
int main(){
    cin.sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}