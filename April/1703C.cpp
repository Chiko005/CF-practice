#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        vector<string> s(n);
        for(int i = 0;i<n;i++){
            int b;
            cin >> b;
            cin >> s[i];
        }
        for(int i =0;i<n;i++){
            for(int j =0;j<s[i].size();j++){
                if(s[i][j] == 'D'){
                    a[i] = (a[i] + 1) % 10;
                }else{
                    a[i] = (a[i] + 9) % 10;
                }
            }
        }
        for(int i =0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;

    }
    return 0;
}