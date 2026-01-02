#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    string result;

    for (char c : s) {
      if (c == 'T') {
        result.push_back(c);
      }
    }

    for (char c : s) {
      if (c != 'T') {
        result.push_back(c);
      }
    }

    cout << result << "\n";
  }

  return 0;
}
