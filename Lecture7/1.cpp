#include <iostream>
using namespace std;
int main() {
  string binary = "";

  int a, k;
  cin >> a >> k;

  while (a != 0) {
    int r = a % k;
    if (k >= 11) {
      string n;
      if (r > 9) n = char('A' + r % 10);
      else n = to_string(r);
      binary = n + binary;
    } else {
      binary = to_string(a % k) + binary;
    }
    a /= k;
  }
  cout << binary << endl;
}