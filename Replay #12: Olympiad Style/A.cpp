#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    int m = max(max(a, b), c);
    int mm = min(min(a,b), c);
    int soma = a + b + c;

    cout << soma - m - mm << endl;
}