#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s = to_string(n);
  string reversed = "";

  for (int i = s.size() - 1; i >= 0; --i) {
    reversed += s[i];
  }

  if (reversed == s) cout << "yes";
  else cout << "no";

  cout << endl;
}