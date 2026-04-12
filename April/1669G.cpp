#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<string>a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int j = 0;j<m;j++){
            int empty = n-1;
            for(int i = n-1;i>=0;i--){
                if(a[i][j] == 'o') empty = i - 1;
                else if(a[i][j] == '*'){
                    swap(a[i][j],a[empty][j]);
                    empty--;
                }
            }
        }
        for(int i = 0; i < n; i++) cout << a[i] << endl;
    }
    return 0;
}