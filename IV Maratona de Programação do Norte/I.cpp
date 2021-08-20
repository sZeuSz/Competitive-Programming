#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>    // std::min_element, std::max_element
#include <math.h>
using namespace std;

string xorSpace(string s){
     int n=s.size();
     for (int i=0; i<n; ++i){
            s[i]^=' ';
     }
     return s;
}

void solve(){
  int64_t n, x;

  cin >> n;
  int64_t v[n];

  for (int64_t i = 0; i < n; i++) {

    cin >> v[i];
  }

  cin >> x;

  int eh = 1;
  int64_t teto = (int64_t)*max_element(v,v+n);
  int ig = 1;
  for (int64_t i = 1; i < n; i++) {

    if(v[i] != v[i-1]){
      ig = 0;
      break;
    }
  }
  if(ig && (x % n != 0)){
    eh = 0;
  }
  for (int64_t i = 0; i < n; i++) {

    if(v[i] < teto){

      if(v[i] + x > teto){
        int64_t rm = x - (teto - v[i]);
        //cout << rm << endl;
        v[i] += (teto - v[i]);
      //cout << "antes" << x << endl;
        x = rm;//(teto-v[i]);
      //cout << "depois" << x << endl;
      }
      else if(v[i] + x == teto){
        v[i] += x;
        x = 0;
      }
      else{
        eh = 0;
        break;
      }
    }
  }
  ig = 1;
  if(x){
    //cout << x << endl;
    for (int64_t i = 1; i < n; i++) {

      if(v[i] != v[i-1]){
        ig = 0;
        break;
      }
    }
  }
  if(ig && (x % n != 0)){
    eh = 0;
  }

  for (int64_t i = 1; i < n; i++) {

    if(v[i] != v[i-1]){
      eh = 0;
      break;
    }
  }
  printf("%s\n", (eh == 1) ? "Boa Sorte" : "Sem Sorte");

}

int main(){
  int t = 1;

  //cin >> t;

  while(t--){
    solve();
  }
}
