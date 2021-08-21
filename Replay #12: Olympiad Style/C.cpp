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

    vector<int> c;
    int nop = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]){
                if(c.size() == 0){
                    c.push_back(a[i]);
                }
                else {
                    int igual = 0;
                    for(auto&o : c){
                        if(o == a[i]){
                            igual = 1;
                        }
                    }
                    if(!igual){
                        c.push_back(a[i]);
                    }
                }
            }
        }
    }

    sort(c.begin(), c.end());

    int entrou = 0;

    for(int i = 0;i < c.size(); i++){
        if(c[i] != 0){
            cout << c[i] << endl;
        }
        entrou = 1;
    }

    if(!entrou){
        cout << "*" << endl;
    }
}