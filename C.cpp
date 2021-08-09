#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    long long int t = 0;

    vector<long long int> h(n, 0);
    vector<long long int> g(n, 0);

    for(int i = 0; i < n; i++){
        cin >> g[i];
        t+=g[i];
    }

    t/=n;
    
    for(int i = 0; i < n; i++){
        if(g[i] != 0){
            h[i] = g[i] - t;
        }
    }

    cout << "custos" << endl;
    for(int i = 0; i < n; i++){
        cout << h[i] << " ";
    }
    cout << endl;
    long long int m = 0;
    long long int custo = 0;
    long long int copos = 0;

    cout << t << endl;

    for(int i = 0; i < n; i++){
        cout << "i = " << i << " copos == " << copos << " h[i] == " << h[i] << endl; 
        if(h[i] > 0){
            g[i] -= h[i];
            copos += h[i];
            h[i] = 0;
            m++;
        }
        else if(h[i] == 0){
            m++;
            continue;
        }
        else{
            if(copos > 0){
                if(copos == (h[i] * (-1))){
                    cout <<"sim" <<endl;
                    h[i] += copos;
                    custo += copos * m;
                    copos = 0;
                }
                else if(copos > (h[i] * (-1))){
                    cout << "maior" << endl;
                    custo = copos * m;
                    copos -= h[i];
                    h[i] += (-h[i]);
                }
                else{
                    cout << "menor" << endl;
                    custo = copos * m;
                    h[i] += copos;
                    copos = 0;
                }
            }
        }
        cout << "custo nessa rodada ->>> " << custo << endl;
        cout << "i = " << i << " copos == " << copos << " h[i] == " << h[i] << endl; 

        cout << copos << endl;
    }


    for(int i = 0; i < n; i++){
        cout << h[i] << " ";
    }

    cout << endl;
    //m = 0;
    // copos = 0;
    cout << "anti horario" << endl;
}

/*
    h = g[i] - t
*/
int main(){
    int t = 1;

    // cin >> t;

    while(t--){
        solve();
    }

    return 0;
}