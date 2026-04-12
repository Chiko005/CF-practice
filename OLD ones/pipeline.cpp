#include<bits/stdc++.h>
using namespace std;

bool possible(long long m,int n,int k){
    long long total_pipes = 1 + m * k - (m * (m+1))/2;
    return total_pipes >= n;
} 
int main(){
    int n, k;
    cin >> n >> k;
    if(n == 1){
         cout << 0 << endl;
         return 0;
    }
    long long max_pipes = 1 + k * (k-1)/2;
    if(max_pipes < n){
         cout<< -1 << endl;
         return 0;
    }
    long long low = 0, high = k;
    while(low < high){
        long long mid = (low + high) >> 1;
        if(possible(mid, n, k)) high = mid;
        else low = mid + 1;
    }
    cout << low << endl;

    return 0;
}