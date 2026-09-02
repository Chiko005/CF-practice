#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    double p = 1.0 * a / b;
    double q = (1.0 - 1.0 * a / b) * (1.0 - 1.0 * c / d);
    cout << fixed << setprecision(10) << p / (1.0 - q) << "\n";
    return 0;
}