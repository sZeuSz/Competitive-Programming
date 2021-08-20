#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x;

    cin >> x;

    cout << (!x ? "nulo" : (x > 0 ? "positivo" : "negativo")) << endl;
}
int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}