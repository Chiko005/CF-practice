#include<bits/stdc++.h>
using namespace std;
bool adj[6][6];

int main(){
    int m;
    cin >> m;
    for(int i =0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u][v] = adj[v][u] = true;
    }
    for(int i = 1;i<=5;i++){
        for(int j = i + 1;j<=5;j++){
            for(int k = j + 1;k<=5;k++){
                if(adj[i][j] && adj[j][k] && adj[k][i]){
                    cout << "WIN" << endl;
                    return 0;
                }else if(!adj[i][j] && !adj[j][k] && !adj[k][i]){
                    cout << "WIN" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "FAIL" << endl;

    return 0;
}