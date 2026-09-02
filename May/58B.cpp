#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n > 1){
        cout << n << " ";
        bool found = false;
        for(int i =2;i * i <=n;i++){
            if(n % i == 0){
                n /= i;
                found = true;
                break;
            }
        }
        if(!found){
            n = 1;
        } 
    }
    cout << n << "\n";
    return 0;
}