#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cin >> n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int coin;
        cin >> coin;
        sum+= coin;
        arr.push_back(coin);
    }
    sort(arr.rbegin(),arr.rend());
    int mySum = 0,count =0;
    for(int i=0;i<n;i++){
        mySum+=arr[i];
        count++;
        if(mySum > (sum - mySum)) break;
    }
    cout << count << endl;

    return 0;
}