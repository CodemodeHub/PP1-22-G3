#include <iostream>
#include <algorithm>
using namespace std;
// code -> edco, cdeo...
int main() {
  string s, t;
  cin >> s >> t;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  // cout << s << "\n" << t;
  // return 0;
  if(t == s) cout << "It is anagram";
  else cout << "No(";
  cout << "\n";
}