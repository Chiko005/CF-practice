// #include<bits/stdc++.h>
// using namespace std;
 
 
// int main(){
//     int n,m;
//     cin >> n >> m;
//     int steps = 0;
//     while(m > n){
//         if(m % 2 == 0)m /= 2;
//         else m++;
//         steps++;
//     }
//     steps += (n-m);
//     cout << steps << endl;

//     return 0;
// }


// Using BFS
#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n,m;
    cin >> n >> m;
    if(n >= m){
        cout << n - m << endl;
        return 0;
    }
    queue<pair<int,int>>q;
    q.push({n,0});
    vector<bool>visited(2*m+2, false);
    visited[n] = true;
    while(!q.empty()){
        int curr = q.front().first;
        int steps = q.front().second;
        q.pop();
        if(curr == m){
            cout << steps<< endl;
            return 0;
        }
        if(curr * 2 <= 2*m && !visited[curr*2]){
            visited[curr*2] = true;
            q.push({curr*2,steps+1});
        }
        if(curr - 1 >= 0 && !visited[curr - 1]){
            visited[curr - 1] = true;
            q.push({curr - 1, steps + 1});
        }
    }
    return 0;
}