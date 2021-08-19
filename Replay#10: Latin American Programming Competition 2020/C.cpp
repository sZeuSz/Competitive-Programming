#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<long long int> g(n, 0);

    int t = 0;

    for(int i = 0; i < n; i++){

        cin >> g[i];
        t += g[i];
    }

    t = t/n;

    cout << 'T' << t << endl;
    
    vector<long long int> h(n, 0);
    vector<long long int> w(n, 0);

    for(int i = 0; i < n; i++){
        h[i] = (g[i] - t);
        w[i] = (g[i] - t);
    }

    for(int i = 0; i < n; i++){
        cout << h[i] << " ";
    }
    cout << endl;

    int copos = 0;
    int cont = 0;
    int custo = 0;
    /*
    */
    t = 2;
    while(t--){
    for(int i = 0; i < n; i++){
        if(copos > 0) ++cont;
        if(h[i] > 0){
            copos += h[i];
            h[i] = 0;
        }
        else if(h[i] == 0){
            continue;
        }
        else if(h[i] < 0){
            if(copos == 0){
                continue;
            }
            else if(copos != 0){
                cout << cont << endl;
                if(copos < (h[i] * (-1))){
                    h[i] += copos;
                    custo += (copos * cont);
                    copos = 0;
                }
                // 4 -4 === copos * cont
                else if(copos == (h[i] * (-1))){
                    custo += (copos * cont);
                    copos = 0;
                    h[i] = 0;
                }
                // 6 -4 === copos - (copos + h[i]) => 6 - 2 = 4 
                else{
                    custo += ((copos - (copos + h[i])) * cont);
                    copos = copos + h[i];
                    h[i] = 0;
                }

                cout << "custo ->> "  <<  custo   << endl;
            }
        }
    }
    }
    for(int i = 0; i < n; i++){
        cout << h[i] << " ";
    }
    cout << endl;
    cout << custo << endl;

    cout << "Anti horaurio" << endl;
    
    copos = 0;
    cont = 0;
    custo = 0;
    int la = 0;

    if(w[0] > 0){
            copos += w[0];
            w[0] = 0;
    }
    else if(w[0] == 0){
        la++;
    }
    else if(w[0] < 0){
        if(copos == 0){
            la++;
        }
        else if(copos != 0){
            if(copos < (w[0] * (-1))){
                w[0] += copos;
                custo += (copos * cont);
                copos = 0;
            }
            // 4 -4 === copos * cont
            else if(copos == (w[0] * (-1))){
                custo += (copos * cont);
                copos = 0;
                w[0] = 0;
            }
                // 6 -4 === copos - (copos + h[i]) => 6 - 2 = 4 
            else{
                custo += (copos - (copos + w[0]));
                copos = copos + w[0];
                w[0] = 0;
            }
        }
    }
    if(copos > 0 && w[0] < 0) ++cont;

    cout << copos << " " << cont << " " << custo << " " << w[0] << endl;

    t = 2;
    while(t--){
    for(int i = w.size() - 1; i >= 0; i--){
        if(copos > 0 && w[i] <= 0) ++cont;
        cout << w[i] << endl;
        if(w[i] > 0){
            copos += w[i];
            w[i] = 0;
        }
        else if(w[i] == 0){
            continue;
        }
        else if(w[i] < 0){
            if(copos == 0){
                continue;
            }
            else if(copos != 0){
                if(copos < (w[i] * (-1))){
                    w[i] += copos;
                    // custo += (copos * cont);
                    copos = 0;
                    // --cont;
                }
                // 4 -4 === copos * cont
                else if(copos == (w[i] * (-1))){
                    custo += (copos * cont);
                    copos = 0;
                    w[i] = 0;
                }
                // 6 -4 === copos - (copos + h[i]) => 6 - 2 = 4 ]
                //16 -7 16 - 16 -7 9 16 - 9 = 7
                
                else{
                    custo += ((copos - (copos + w[i])) * cont);
                    copos = copos + w[i];
                    w[i] = 0;
                }
                cout << "custo ->>>>>.." << custo << endl;
            }
        }
    }
    }
    for(int i = 0; i < n; i++){
        cout << w[i] << " ";
    }
    cout << endl;
    cout << custo << endl;
}


int main(){
    int t = 1;

    // cin >> t;

    while(t--){
        solve();
    }
}