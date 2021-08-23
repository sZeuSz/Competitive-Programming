#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<int> v(n);
    for(auto&x : v){
        cin >> x;
    }   
    vector<int> ans(n);


    for (int i = 0; i < n; i++) {
        if (i > 0){ 
            ans[i-1] += v[i]; 
        }
        ans[i] += v[i];
        if (i+1 < n) {
            ans[i+1] += v[i]; 
        }
    }
    for(int x : ans){

        cout << x << endl;
    }
}

int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}