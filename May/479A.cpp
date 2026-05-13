#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    int result = a + b + c;
    int result2 = max({(a+b)*c,a*(b+c),a*b*c});
    int result3 = max(a*b+c,a+b*c);
    result = max({result, result2,result3});
    cout << result << endl;
    return 0;
}