#include <bits/stdc++.h>

using namespace std;

long long hashe[200010], pp[200010], base = 131;

int fs[26], ft[26];

unordered_set<long long> st;

bool check(){
    for (int i = 0; i < 26; i++){
        if (fs[i] != ft[i]) return false;
    }
    return true;
}

long long getSubhashe(int l, int r){
    return hashe[r] - hashe[l-1]*pp[r-l+1];
}

int main() {

    string s, t;
    cin >> s >> t;
    int n = s.length(), m = t.length();
    for (int i = 1; i <= n; i++){
        fs[s[i-1]-'a']++;
    }

    pp[0] = 1;

    for (int i = 1; i <= m; i++){
        hashe[i] = hashe[i-1]*base + t[i-1];
        pp[i] = pp[i-1]*base;
    }
    for (int i = 1; i <= m; i++){

        ft[t[i-1]-'a']++;
        if (i < n) continue;
        if (i > n) ft[t[i-n-1]-'a']--;

        if (check()) st.insert(getSubhashe(i-n+1, i));
    }
    cout << st.size() << endl;
}