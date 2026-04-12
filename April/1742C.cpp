#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        char arr[8][8];
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cin >> arr[i][j];
            }
        }
        bool found = false;
        for(int i = 0; i < 8; i++){
            bool allR = true;
            for(int j = 0; j < 8; j++){
                if(arr[i][j] != 'R'){
                    allR = false;
                    break;
                }
            }
            if(allR){
                found = true;
                break;
            }
        }
        if(found) cout << "R\n";
        else cout << "B\n";
    }

    return 0;
}