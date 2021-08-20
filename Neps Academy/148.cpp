#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a, b;

    cin >> a >> b;

    int sum = a + b;

    cout << (sum & 1 ? "Cino" : "Bino") << endl;
}
int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}