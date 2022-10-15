#include <iostream>
using namespace std;

int main() {
  
  char a = 'a';

  string s = "abc1231231EZyw3123123";
  // cout << s << endl;

  string numbers = "";

  for (int i = 0; i < s.length(); ++i) {
    // if (s[i] >= 'a' && s[i] <= 'z') {
    //   cout << char(s[i] - 32);
    // } else if (s[i] >= 'A' && s[i] <= 'Z') {
    //   cout << char(s[i] + 32);
    // }
    if (s[i] >= '0' && s[i] <= '9') {
      cout << s[i];
      numbers += s[i];
      // cout << numbers << endl;
    }
  }
  // cout << numbers;
  cout << endl;

  for (int i = 0; i < numbers.length(); ++i) {
    cout << numbers[i] << " ";
    cout << "int: " << numbers[i] - 48 << endl;
  }
  cout << endl;

  // aaaAA

  // AAAAA

}