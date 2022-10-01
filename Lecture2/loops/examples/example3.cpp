#include <iostream>
using namespace std;

int main() {
  int a = 0;

  while (a < 100) {
    if (a == 50) {
      break;
    }
    cout << a << endl;
    a++;
    // cout << a << endl;
    // a % 2 == 0;
    // a++;
  }

  return 0;
}