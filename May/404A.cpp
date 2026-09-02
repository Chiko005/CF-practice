#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string>grid(n);
    for(int i =0;i<n;++i){
        cin >> grid[i];
    }
    set<char>a,b;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i == j || i + j == n-1) a.insert(grid[i][j]);
            else b.insert(grid[i][j]);
        }
    }
    if(a.size() == 1 && b.size() == 1 && *a.begin() != *b.begin()){
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}