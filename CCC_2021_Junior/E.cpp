#include <bits/stdc++.h>

using namespace std;

int main(){

    long long int m, n, k;

    cin >> m >> n;

    cin >> k;

    unordered_set<int> linha, coluna;

    for(int i = 0; i < k; i++){
        
        char ch;
        int x;

        cin >> ch >> x;

        if(ch == 'R'){

            if(linha.find(x) == linha.end()){
                linha.emplace(x);
            }
            else{
                linha.erase(x);
            }
        }
        else{
            if(coluna.find(x) == coluna.end()){
                coluna.emplace(x);
            }
            else{
                coluna.erase(x);
            }
        }
    }

    long long int ans = m*coluna.size() + n*linha.size() - 2 * coluna.size() * linha.size();


    cout << ans << endl;
}