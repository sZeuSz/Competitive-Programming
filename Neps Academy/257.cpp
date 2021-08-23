#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;
    
    int a = 1, b = 1, c, i;

    if( n == 0){
        cout << a << endl;
        return;
    }

    for(i = 2; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    cout << b << endl;
    
}

int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}   