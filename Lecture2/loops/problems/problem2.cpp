#include <iostream>
using namespace std;

int main() {
  int a, max = -10000000, ans = 0;
  cin >> a;

  while (a != 0) {
    // if (a == 0) break;
    if (a > max) {
      max = a;
      ans = 1;
    } else if (a == max) {
      ans++;
    }
    cin >> a;
  }

  cout << ans << endl;

  return 0;
}