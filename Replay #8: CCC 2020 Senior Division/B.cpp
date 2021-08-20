#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;
    // int mat[1001][1001];
    // int visited[1001][1001];
    // int mat[1001][1001];

    vector<vector<pair<int, int>>> adj(1000010);

    cin >> n >> m;
    int mat[1010][1010];
    int visited[1010][1010];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> mat[i][j];
            adj[i*j].push_back(make_pair(i, j));
        }
    }

    queue<pair<int, int>> bfs;

    bfs.push(make_pair(1, 1));
    visited[1][1] = 1;

    while(!bfs.empty()){
        pair<int, int> atual = bfs.front();
        bfs.pop();

        if(atual.first == n && atual.second == m){
            cout << "yes" << endl;
            return;
        }
        else{
            for(pair<int, int> proximo : adj[mat[atual.first][atual.second]]){
                if(!visited[proximo.first][proximo.second]){
                    bfs.push(proximo);
                }
                visited[proximo.first][proximo.second] = 1;
            }
        }
    }
    cout << "no" << endl;
    return;
}

int main(){

    int t = 1;

    //cin >> t;

    while(t--){
        solve();
    }

    return 0;
}