#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int b;

    cin >> b;

    int ans = 5 * b - 400;

    cout << ans << endl;
    cout << ((ans < 100) ? "1" : (ans > 100) ? "-1" : "0") << endl;
}