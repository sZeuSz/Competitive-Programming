#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> v(n);

    for(auto&x : v){
        cin >> x;
    }

    int m = v[0];
    int ind = 0;
    for(int i = 1; i < n; i ++){
        if(v[i] > m){
            m = v[i];
            ind = i;
        }
    }
    int somaan = 0;
    int somadp = 0;
    for(int i = 0; i < n; i ++){
        if(i < ind){
            somaan+= v[i];
        }
        else if(i > ind){
            somadp += v[i];
        }
    }

    cout << somaan << endl;
    cout << somadp << endl;
    
}