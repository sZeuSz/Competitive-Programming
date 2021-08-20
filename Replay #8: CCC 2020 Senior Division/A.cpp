#include <bits/stdc++.h>

using namespace std;

void solve(){
  int64_t n;
  vector<pair<double,double>> v;
  cin >> n;

  while(n--){
    double x, y;

    cin >> x >> y;
    v.push_back({x, y});
    
  }

  double max = -1;

  sort(v.begin(), v.end());

  double x = v[0].first, y= v[0].second;
  double atual;
  for(int64_t i = 1; i < v.size(); i++){

    // cout << v[i].first << " " << v[i].second << endl;
    atual = abs((v[i].second - y) / (v[i].first - x));
    // cout << "atual ->> " << atual << endl;
    if(atual > max) max = atual;
    x = v[i].first;
    y = v[i].second;
    // cout << "max ->>" << max << endl;
  }

  printf("%.1lf\n", max);
}
/*
0 100
20 50
10 120

0 100
10 120
20 50

t1= 
120 - 100
10 - 0
== 20 / 10 = 2 m/s

t2=
50 - 120
20 - 10
70/10 = 7 m/s

7 - 7 / 7 < 10e5

*/

/*
teste 2

20 -5
0 -17
10 31
5 -3
30 11

0 -17
5 -3
10 31
20 -5
30 11

-17 -3  / 5 - 0 = -20 / 5 = -4 m/s
31 - 3 / 10 - 5 = 28 / 5 =  5.6 m/s
-5 - (31) / 20 - 10 = 36 / 10 = - 3.6 m/s
11 - (-5) / 30 - 20 = 16 / 10 1.6 m/s


(5.6 - c) / c < 10^-5

==> soluction
5.6 * 100000 / 100001

*/

int main(){
    int t = 1;

    //cin >> t;

    while(t--){
      solve();
    }
}
