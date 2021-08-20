#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6+5,  MAXM = 5e5+5;
int N, fila[MAXN], ultimo[MAXM];
double prob[MAXM];

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> fila[i];
    ultimo[fila[i]] = i;
  }

  memset(prob, 0, sizeof(prob));

  int c = fila[0], j = fila[N-1];
  if (c == j) {
    cout << 1 << endl;
    return 0;
  }

  prob[c] = 1.0;
  double total = 1.0;
  for (int i = N-1; i >= 1; i--) {
    int b = fila[i];

    if (ultimo[b] == i && b != c && b != j) {
      prob[b] = total / (N-i);
    }
    total += prob[b];
  }

  double ans = total / N;

  cout << fixed << ans << endl;

  return 0;
}
