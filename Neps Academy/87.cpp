#include <bits/stdc++.h>

using namespace std;

void solve(){
    int P, R;

    cin >> P >> R;

    cout << (P == 0 ? 'C' : (P == 1 && R == 1 ? 'A' : 'B')) << endl;
}
int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}