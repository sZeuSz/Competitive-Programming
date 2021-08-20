#include<bits/stdc++.h>

using namespace std;


int n;

struct Ans{
    int a = 0;
    int b = 0;
    int c = 0;
};

int rec(string &str){
    Ans total;

    // for(char x : str){
        
    //     if(x == 'A') total.a++;
    //     else if(x == 'B') total.b++;
    //     else total.c++;
    // }
    for(int i = 0; i < n; i++){
        if(str[i] == 'A'){
            total.a++;
        }
        else if(str[i] == 'B'){
            total.b++;
        }
        else if(str[i] == 'C'){
            total.c++;
        }
    }

    Ans a, b, c;

    int x = 0;

    for(int i = 0; i < total.a; i++){
        
        if(str[x] == 'A') a.a++;
        else if(str[x] == 'B') a.b++;
        else a.c++;
        x++;
    }

    for(int i = 0; i < total.b; i++){
        
        if(str[x] == 'A') b.a++;
        else if(str[x] == 'B') b.b++;
        else b.c++;
        x++;
    }

    for(int i = 0; i < total.c; i++){
        
        if(str[x] == 'A') c.a++;
        else if(str[x] == 'B') c.b++;
        else c.c++;
        x++;
    }
    int ans = INT_MAX;

    for(int i = 0; i < n; i++){

        int trocas = a.b + a.c + b.a + b.c - min(a.b, b.a);

        ans = min(trocas, ans);
        
        if(str[i] == 'A') a.a--;
        else if(str[i] == 'B') a.b--;
        else a.c--;

        if(str[i + total.a] == 'A') a.a++;
        else if(str[i + total.a] == 'B') a.b++;
        else a.c++;

        if(str[i + total.a] == 'A') b.a--;
        else if(str[i + total.a] == 'B') b.b--;
        else b.c--;

        if(str[i + total.a + total.b] == 'A') b.a++;
        else if(str[i + total.a + total.b] == 'B') b.b++;
        else b.c++;

        if(str[i + total.a + total.b] == 'A') c.a++;
        else if(str[i + total.a + total.b] == 'B') c.b++;
        else c.c++;

        if(str[i + total.a + total.b + total.c] == 'A') c.a--;
        else if(str[i + total.a + total.b + total.c] == 'B') c.b--;
        else c.c--;
    }

    return ans;

}

int main(){

    string str;

    cin >> str;

    n = str.size();

    str += str;

    int ans = rec(str);

    for(int i = 0; i < str.size(); i++){

        if(str[i] == 'A') str[i] = 'C';
        else if(str[i] == 'C') str[i] = 'A';
    }

    cout << min(ans, rec(str))  << endl;
    // cout << l.m << endl;
    // cout << l.s << endl;
    // cout << m.l << endl;
    // cout << m.s << endl;
    // cout << m.l << "space" << l.m << endl;
}