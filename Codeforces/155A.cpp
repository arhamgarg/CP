#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int best = a[0];
  int worst = a[0];
  int amazing = 0;

  for (int i = 1; i < n; i++) {
    if (a[i] > best) {
      amazing++;
      best = a[i];
    } else if (a[i] < worst) {
      amazing++;
      worst = a[i];
    }
  }

  cout << amazing << "\n";

  return 0;
}
