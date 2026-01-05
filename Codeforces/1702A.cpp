#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string m;
    cin >> m;

    long long roundNum = pow(10, m.size() - 1);
    long long price = stoll(m);

    cout << price - roundNum << "\n";
  }

  return 0;
}
