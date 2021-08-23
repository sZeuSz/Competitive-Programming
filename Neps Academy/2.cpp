#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x, y, z;

    vector<pair<int, int>> v;

    cin >> x >> y >> z;

    v.push_back({x,1});
    v.push_back({y,2});
    v.push_back({z,3});

    sort(v.begin(), v.end());

    for(pair<int,int> w : v){
        cout << w.second << endl;
    }
}

int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}