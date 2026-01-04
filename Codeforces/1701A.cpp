#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int cnt = 0;

    for (int i = 0; i < 4; i++) {
      int x;
      cin >> x;

      cnt += x;
    }

    if (cnt == 0) {
      cout << 0 << "\n";
    } else if (cnt == 4) {
      cout << 2 << "\n";
    } else {
      cout << 1 << "\n";
    }
  }

  return 0;
}
