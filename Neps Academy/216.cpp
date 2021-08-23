#include <bits/stdc++.h>

using namespace std;

void solve(){
    int X;

    cin >> X;

    for(int i = 1; i <= X; i++){

        if(X % i == 0) cout << i << " ";
    }

    cout << endl;
}
int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}