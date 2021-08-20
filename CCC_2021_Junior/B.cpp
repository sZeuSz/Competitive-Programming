#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;


    cin >> N;

    int maior_lance = 0;
    string ans;

    while(N--){
        string nome;
        int lance;
        cin >> nome >> lance;
        if(lance > maior_lance){
            maior_lance = lance;
            ans = nome;
        }
    }
    cout << ans << endl;
}