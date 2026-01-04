#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  if (n < 2) {
    return false;
  }

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  int nextPrime = -1;

  for (int i = n + 1; i <= 50; i++) {
    if (isPrime(i)) {
      nextPrime = i;
      break;
    }
  }

  if (nextPrime == m) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}
