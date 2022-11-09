#include <bits/stdc++.h>
using namespace std;

string reversed = "";

void reversedString(int index, string s) {
  if (index < 0) return;

  reversed += s[index];

  reversedString(index - 1, s);
}

int main() {
  int n;
  cin >> n;

  string s = to_string(n);

  reversedString(s.size() - 1, s);

  if (reversed == s) cout << "yes";
  else cout << "no";

  cout << endl;
}