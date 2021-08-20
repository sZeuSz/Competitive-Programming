#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long int n;

    cin >> n;

    vector<long long int> v(n);

    for(auto&x : v){
        cin >> x;
    }

    long long int  sum = 0;
    long long int  days = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
        days++;

        if(sum >= 1000000){
            break;
        }
    }

    cout << days << endl;
}
int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}