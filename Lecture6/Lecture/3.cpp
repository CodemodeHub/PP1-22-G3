#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string s;
  cin >> s;
  string t = s;
  reverse(t.begin(), t.end());
  if(t == s) cout << "It is palindrome";
  else cout << "No(";
  cout << "\n";
}