#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, I1, I2;
    
    cin >> n;

    vector<int> v(n);

    for(auto&x:v){
        cin >> x;
    }

    int L1 = false;
    int L2 = false;
    for(int i = 0 ; i < n ; i++){
        if(v[i] == 1){
            L1 ^= 1;
        }
        else{
            L1 ^= 1;
            L2 ^= 1;
        }
    }

    cout << L1 << endl;
    cout << L2 << endl;
}
int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}