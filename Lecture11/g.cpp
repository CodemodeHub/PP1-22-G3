#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  string temp = "";

  for (int i = 0; i < s.size(); ++i) {
    if (temp.find(s[i]) != string::npos) cout << s[i];
    else temp += s[i];
  }
}