#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    vector<vector<int>>matrix(5, vector<int>(5));
    int r,c;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>matrix[i][j];
            if(matrix[i][j] == 1){
                r =i+1;c=j+1;
            } 
        }
    }
    cout << abs(r-3) + abs(c-3) << endl;
    return 0;
}