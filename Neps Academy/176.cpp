#include <bits/stdc++.h>

using namespace std;

void solve(){
    int N;

    cin >> N;

    vector<int> seq(N);

    for(auto&x : seq){
        cin >> x;
    }
    sort(seq.begin(), seq.end());
    for(auto&x : seq){
        cout << x << " ";
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