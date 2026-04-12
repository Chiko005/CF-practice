#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int total = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total += arr[i];
    }
    sort(arr.rbegin(), arr.rend());
    int mySum = 0;
    for(int i = 0;i<n;i++){
        mySum += arr[i];
        total -= arr[i];
        if(mySum > total){
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}