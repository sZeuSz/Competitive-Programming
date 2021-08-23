#include <bits/stdc++.h>

using namespace std;

void solve(){
    long double x, y;

    cin >> x >> y;

    cout << fixed;
    cout << setprecision(4);
    cout << pow(x, y) << endl;
}
int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}