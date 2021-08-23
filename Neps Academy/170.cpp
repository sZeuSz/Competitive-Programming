#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    while(n--){
        long double number;

        cin >> number; 
        cout << fixed;
        cout << setprecision(4);
        cout << sqrt(number) << endl;
    }
}
int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}