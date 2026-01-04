#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int y;
  cin >> y;

  for (int year = y + 1;; year++) {
    set<char> digits;

    for (char c : to_string(year)) {
      digits.insert(c);
    }

    if (digits.size() == 4) {
      cout << year << "\n";
      break;
    }
  }

  return 0;
}
