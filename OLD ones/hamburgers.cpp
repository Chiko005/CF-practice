#include<bits/stdc++.h>
using namespace std;
 
bool possible(string &s,int nb,int ns,int nc,int pb,int ps,int pc,long long r,long long x){
    int cb = count(s.begin(),s.end(),'B');
    int cs = count(s.begin(),s.end(),'S');
    int cc = count(s.begin(),s.end(),'C');
    long long totalCost = max(0LL,cb*x - nb)*pb + max(0LL,cs*x - ns)*ps + max(0LL,cc*x - nc)*pc;
    return totalCost <= r;
}
 
int main(){
    string s;
    cin >> s;
    int nb,ns,nc;
    cin >> nb >> ns >> nc;
    int pb,ps,pc;
    cin >> pb >> ps >> pc;
    long long r;
    cin >> r;
    long long ans = 0;
    long long low = 0, high = 1e13;
    while(low <= high){
        int mid = (low + high) >> 1;
        if(possible(s,nb,ns,nc,pb,ps,pc,r,mid)){
            ans = mid;
            low = mid + 1;
        } 
        else high = mid -1;
    }
    cout << ans << endl;
    return 0;
}