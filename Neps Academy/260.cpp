#include <bits/stdc++.h>

using namespace std;

void solve(){
    int P1, C1, P2, C2;

    cin >> P1 >> C1 >> P2 >> C2;

    int s1 = P1 * C1;
    int s2 = P2 * C2;

    cout << (s1 == s2 ? "0" : (s1 < s2) ? "1" : "-1");
}
int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}