#include<bits/stdc++.h>
using namespace std;
vector<int>adj[105];
int color[105];
bool odd_cycle;

void dfs(int node, int c){
    color[node] = c;
    for(int v : adj[node]){
        if(color[v] == -1){
            dfs(v,1-c);
        }else if(color[v] == c){
            odd_cycle = true;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for(int i =0;i<m;i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(color, -1, sizeof(color));
    int removed = 0;
    for(int i =1;i<=n;i++){
        if(color[i] == -1){
            odd_cycle = false;
            dfs(i,0);
            if(odd_cycle){
                removed++;
            }
        }
    }
    if((n - removed) % 2 != 0){
        removed++;
    }
    cout << removed << endl;
    
    return 0;
}