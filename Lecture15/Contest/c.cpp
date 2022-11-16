#include <iostream>
using namespace std;

int sum = 0;

void samurai(int l, int r) {
  sum += l;
  if (l == r) {
    return;
  }
  samurai(l + 1, r);
}

int main() {
  int n, m;
  cin >> n >> m;
  samurai(n, m);
  cout << sum << endl;
}