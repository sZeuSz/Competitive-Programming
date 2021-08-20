#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int codigo;
    string ant;
    while(cin >> codigo && codigo != 99999){
        int A = codigo/1000;
        int sumA = 0;

        while(A > 0){
            sumA += A%10;
            A/=10;
        }
        if(sumA % 2 == 0 && sumA != 0){
            cout << "right ";
            ant = "right ";
        }
        else if(sumA % 2 != 0){
            cout << "left ";
            ant = "left ";
        }
        else{
            cout << ant;
        }
        // cout << sum << endl;
        cout << codigo%1000 << endl;
    }
    
}