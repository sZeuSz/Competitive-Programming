#include <iostream>
#include <stack>
#include <vector>
#include <queue>

using namespace std;

string xorSpace(string s){
     int n=s.size();
     for (int i=0; i<n; ++i){
            s[i]^=' ';
     }
     return s;
}

void solve(){
  string st;
  cin >> st;
  cout << xorSpace(st) << endl;
}

int main(){
  int t = 1;

  //cin >> t;

  while(t--){
    solve();
  }
}
