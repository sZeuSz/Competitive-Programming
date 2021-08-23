#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    string str1, str2;

    cin >> n;

    cin >> str1;
    cin >> str2;

    int ans = 0;
    for(int i = 0; i < str1.size(); i++){

        if(str1[i] == str2[i]) ans++;
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