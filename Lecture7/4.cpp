#include <iostream>
using namespace std;

int main() {
  string s, ans;
  int max = 0;
  while (cin >> s) {
    if (s.length() > max) {
      max = s.length();
      ans = s;
    }
  }
  cout << ans;
}