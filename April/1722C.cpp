#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<string>a(n),b(n),c(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i]; 
        for(int i = 0; i < n; i++) cin >> c[i];
        unordered_map<string, int>freq;
        for(int i = 0; i < n; i++) freq[a[i]]++;
        for(int i = 0; i < n; i++) freq[b[i]]++;
        for(int i = 0; i < n; i++) freq[c[i]]++;
        int s1 =0,s2 = 0,s3 = 0;
        for(int i =0;i<n;i++){
            if(freq[a[i]] == 1) s1 += 3;
            else if(freq[a[i]] == 2) s1 += 1;
            if(freq[b[i]] == 1) s2 += 3;
            else if(freq[b[i]] == 2) s2 += 1;
            if(freq[c[i]] == 1) s3 += 3;
            else if(freq[c[i]] == 2) s3 += 1;
        }
        cout << s1 << " " << s2 << " " << s3 << endl;
    }
    return 0;
}