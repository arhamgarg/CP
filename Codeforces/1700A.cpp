#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    long long n, m;
    cin >> n >> m;

    long long cost = m * (m + 1) / 2 + m * (n * (n + 1) / 2 - 1);
    cout << cost << "\n";
  }

  return 0;
}
