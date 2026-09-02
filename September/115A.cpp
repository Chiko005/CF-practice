#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dfs(int u, const vector<vector<int>>&adj){
    int depth = 1;
    for(int v : adj[u]){
        depth = max(depth, 1 + dfs(v, adj));
    }
    return depth;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>>adj(n + 1);
    vector<int>roots;
    for(int i = 1;i<=n;++i){
        int p;
        cin >> p;
        if(p == -1) roots.push_back(i);
        else adj[p].push_back(i);
    }
    int max_depth = 0;
    for(int root : roots){
        max_depth = max(max_depth,dfs(root, adj));
    }
    cout << max_depth << endl;
    return 0;
}