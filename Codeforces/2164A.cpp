#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    long long x;
    cin >> x;

    long long L = a[0], R = a[0];

    for (int i = 1; i < n; i++) {
      if (a[i] < L) {
        L = a[i];
      }

      if (a[i] > R) {
        R = a[i];
      }
    }

    if (L <= x && x <= R) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
