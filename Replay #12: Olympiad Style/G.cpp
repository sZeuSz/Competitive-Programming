#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;

    cin >> a >> b;

    int soma = a + b;

    int sub = a - b;

    cout << max(soma,sub) << endl;
    cout << min(soma,sub) << endl;

}