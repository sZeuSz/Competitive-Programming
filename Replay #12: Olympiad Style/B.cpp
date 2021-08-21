#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int n;
    cin >> n;
    cin >> s;

    int a = 0;
    int j = 0;
    int k = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'I'){
            for(int j = i; i < s.size(); i++){
                if(s[i] == 'O'){
                    for(int j = i; i < s.size(); i++){
                        if(s[i] == 'I'){
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                    cout << "No" <<endl;
                    return 0;
                }
            }
            cout << "No" <<endl;
            return 0;
        }
    }
    cout << "No" <<endl;
    return 0;
}