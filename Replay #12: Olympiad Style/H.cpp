#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string str;
    cin >> n;
 
    cin >> str;

    int ans =  0;
    if(str[0] != 'I'){
        str[0] = 'I';
        ans++;
        for(int i = 1; i < str.size(); i++){
            if(str[i] != 'O' && str[i - 1] == 'I'){
                str[i] = 'O';
                ans++;
            }
            else if(str[i] == 'O' && str[i - 1] == 'O'){
                str[i] = 'I';
                ans++;
            }
        }
    }//IJJJII
    else if(str[0] == 'I'){
        for(int i = 1; i < str.size(); i++){
            if(str[i] != 'O' && str[i - 1] == 'I'){
                str[i] = 'O';
                ans++;
            }
            else if(str[i] == 'O' && str[i - 1] == 'O'){
                str[i] = 'I';
                ans++;
            }
            else if(str[i] == 'I' && str[i - 1] == 'O'){
                continue
            }
            else if(str[i] != 'I' && str[i - 1] == 'O'){
                str[i] = 'I';
                ans++;
            }
            
        }
    }
    cout << ans << endl;
    cout << str << endl;
}