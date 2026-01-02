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

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int iterations = 0;

    while (!is_sorted(a.begin(), a.end())) {
      for (int i = iterations % 2; i < n - 1; i += 2) {
        if (a[i] > a[i + 1]) {
          swap(a[i], a[i + 1]);
        }
      }

      iterations++;
    }

    cout << iterations << "\n";
  }

  return 0;
}
