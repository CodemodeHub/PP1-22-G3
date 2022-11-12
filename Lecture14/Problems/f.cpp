#include <iostream>
using namespace std;

void primeFactorization(int x, int divisor) {
  if (x == 1) return;

  if (x % divisor == 0) {
    cout << divisor << " ";
    primeFactorization(x / divisor, divisor);
  } else {
    primeFactorization(x, divisor + 1);
  }
}

int main() {
  int x;
  cin >> x;
  primeFactorization(x, 2);
  cout << endl;
}