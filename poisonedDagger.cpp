#include<bits/stdc++.h>
using namespace std;
 
bool possible(vector<int>&a,int mid,int h){
    long long damage = 0;
    for(int i =0;i<a.size()-1;i++){
        damage += min(mid,a[i+1]-a[i]);
    }
    damage += mid;
    return damage >= h;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, h;
        cin >> n >> h;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int low = 1, high = h;
        while(low < high){
            int mid = (low + high) >> 1;
            if(possible(a,mid,h)) high = mid;
            else low = mid + 1;
        }
        cout << low << endl;
    }
    return 0;
}