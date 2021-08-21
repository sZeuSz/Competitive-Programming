#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for(auto&x : a){
        cin >> x;
    }

    for(auto&y : b){
        cin >> y;
    }

    int ans = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] <= b[j]) ans++;
        }
    }
    
    cout << ans << endl;
}