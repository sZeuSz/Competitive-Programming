#include<bits/stdc++.h>

using namespace std;

struct Ans{
    int l = 0;
    int m = 0;
    int s = 0;
};

int main(){
    Ans total;

    string books;

    cin >> books;

    for(char x : books){
        
        if(x == 'L') total.l++;
        else if(x == 'M') total.m++;
        else total.s++;
    }

    Ans l, m, s;

    int x = 0;

    for(int i = 0; i < total.l; i++){
        
        if(books[x] == 'L') l.l++;
        else if(books[x] == 'M') l.m++;
        else l.s++;
        x++;
    }

    for(int i = 0; i < total.m; i++){
        
        if(books[x] == 'L') m.l++;
        else if(books[x] == 'M') m.m++;
        else m.s++;
        x++;
    }

    for(int i = 0; i < total.s; i++){
        
        if(books[x] == 'L') s.l++;
        else if(books[x] == 'M') s.m++;
        else s.s++;
        x++;
    }

    cout << l.s + l.m + m.s + m.l - min(m.l, l.m) << endl;
    // cout << l.m << endl;
    // cout << l.s << endl;
    // cout << m.l << endl;
    // cout << m.s << endl;
    // cout << m.l << "space" << l.m << endl;
}