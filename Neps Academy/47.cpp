#include <bits/stdc++.h>

using namespace std;

void solve(){
    int N;
    
    cin >> N;

    vector<int> seq(N);

    for(auto&x : seq){
        cin >> x;
    }

    int ans = 0;
    for( int k = 2; k < N; k++ ) {
        if (seq[k - 2] == 1 && seq[k - 1] == 0 && seq[k] == 0 ){
            ans++;
        }
    }

    cout << ans << endl;
}

int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}