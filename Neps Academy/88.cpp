#include <bits/stdc++.h>

using namespace std;

void solve(){
    int A, B, C;

    cin >> A >> B >> C;

    cout << (A && !B && !C ? "A" : (!A && B && C ? "A" : (B && !A && !C ? "B" : (!B && A && C ? "B" : (C && !B && !A ? "C" : (!C && B && A ? "C" : "*")))))) << endl;
}

int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}