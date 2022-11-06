#include <iostream>
using namespace std;

string winner(int x) {
  for (int i = 1; x >= 0; ++i) {

    if (x - i <= 0) return "Bob";

    x -= i;

    if (x - 2 * i <= 0) return "Nelson";

    x -= i * 2;
  }
  return "";
}

int main() {
  int n;
  cin >> n;

  cout << winner(n) << endl;
}