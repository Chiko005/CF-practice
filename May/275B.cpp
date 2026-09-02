#include<bits/stdc++.h>
using namespace std;
 
string grid[55];

bool ispure(int r1,int c1,int r2,int c2){
    if(r1 == r2){
        for(int j = min(c1,c2);j<=max(c1,c2);++j){
            if(grid[r1][j] != 'B') return false;
        }
    }else if(c1 == c2){
        for(int i = min(r1,r2);i<=max(r1,r2);++i){
            if(grid[i][c1] != 'B') return false;
        }
    }
    return true;
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>>black_cells;
    for(int i =0;i<n;++i){
        cin >> grid[i];
        for(int j =0;j<m;++j){
            if(grid[i][j] == 'B') black_cells.push_back({i,j});
        }
    }
    for(int i = 0;i<black_cells.size();++i){
        for(int j = i + 1;j < black_cells.size();++j){
            int r1 = black_cells[i].first, c1 = black_cells[i].second;
            int r2 = black_cells[j].first, c2 = black_cells[j].second;
            bool path1 = ispure(r1,c1,r1,c2) && ispure(r1,c2,r2,c2);
            bool path2 = ispure(r1,c1,r2,c1) && ispure(r2,c1,r2,c2);
            if(!path1 && !path2){
                cout << "NO" <<"\n";
                return 0;
            }
        }
    }
    cout << "YES" << "\n";
    return 0;
}