#include <iostream>
using namespace std;

int main() {
  int a = 5;
  a += 6; // a = a + 6; 11
  a -= 4; // a = a - 4; 7
  a %= 10; // a = a % 10; 7
  a /= 2; // a = a / 2; 3

  a = 5;  // 101
  int b = 5 >> 1; // 010

  // ~6 = -(6 + 1) // complement

  // x = x + 1;
  // x += 1;

  // x++;
  // ++x;
 // a = 5
  int c = 7;
  cout << ++a << " " << c++ << endl;  // 101
  cout << c << endl;

  // a = 3;

  // cout << (a == 3) << endl;
  // cout << (a != 3) << endl;

  // cout << (0 or 0) << endl;
  // cout << (3 and -1) << endl;
  // cout << (!3) << endl;

  // cout << (7 & 6) << endl;
  // bool b = true;
  // bool f = false;

  return 0;
}