#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    
    cin >> n;

    vector<long long int> seq(n);

    for(auto&x : seq){
        cin >> x;
    }

    int ans = 0;
    int ant = seq[0];
    int best = 0;
    ans++;
    for(int i = 1; i < n;  i++){
        if(seq[i] == ant){
            ans++;
        }else{
            best = max(best, ans);
            ant = seq[i];
            ans = 0;
            ans++;
        }
    }
    cout << max(best, ans) << endl;
}

int main(){
    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }
}