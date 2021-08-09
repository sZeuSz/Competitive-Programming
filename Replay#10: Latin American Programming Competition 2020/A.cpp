#include <bits/stdc++.h>

using namespace std;

int lt = 11;

vector<int> ans;

void solve(){
  int n;

  cin >> n;

  if (n == 1) {
        cout << "N\n";
        return 0;
  }
  if (n == 2) {
      cout << "Y\n";
      return 0;
  }

  vector<int> ans(1005, 0);

  int w;

  for(int i = 0; i < n; i++){

        cin >> x;

        ans[w]++;

        while(ans[x] == 2){
            ans[x] = 0;
            ans[x + 1]++;
            x++;
        }
  }

  int lt = 0;

  for(int i = 0; i < n; i++){

     if(ans[i]  > 0) lt++;
  }

  cout << (lt < 3 ? "Y" : "N") << endl;

}
int main(){
  int t = 1;

  //cin >> t;

  while(t--){
    solve();
  }

  return 0;
}
