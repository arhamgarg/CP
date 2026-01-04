#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    long long a;
    cin >> n >> a;

    vector<long long> v(n);

    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    int l = 0, r = 0;

    for (auto &x : v) {
      if (x < a) {
        l++;
      }

      if (x > a) {
        r++;
      }
    }

    if (l > r) {
      cout << a - 1 << "\n";
    } else {
      cout << a + 1 << "\n";
    }
  }

  return 0;
}
