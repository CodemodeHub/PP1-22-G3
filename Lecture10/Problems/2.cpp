#include <iostream>
#include <algorithm>
using namespace std;

int maxPalindrome(string s) {

  int ans = 0;

  string temp = "";

  for (int i = 0; i < s.length(); ++i) {
    temp += s[i];
    string temp1 = temp;
    reverse(temp1.begin(), temp1.end());
    if (temp1 != temp) {
      ans = temp1.length();
    }
  } 

  return ans;
}

int main() {
  string s;
  cin >> s;

  cout << maxPalindrome(s);

}