#include <iostream>
using namespace std;

string convertToLetters(string digits) {
  int count = 0;
  string ans = "";

  for (int i = 0; i < digits.size(); ++i) {

    if (digits[i] == '1') {
      ans += char('a' + count);
      count = 0;
    }

    if (digits[i] == '0') count++;

  }
  
  return ans;
}

int main() {
  string s;
  cin >> s;

  cout << convertToLetters(s) << endl;
}