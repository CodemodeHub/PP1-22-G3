#include <iostream>
#include <stack>

using namespace std;

int main() {
  string brackets;
  cin >> brackets;

  stack <char> st;

  for (int i = 0; i < brackets.size(); ++i) {
    if (!st.empty() && st.top() == '(' && brackets[i] == ')') {
      st.pop();
    } else st.push(brackets[i]);
  }

  if (st.empty()) {
    cout << "YES";
  } else cout << "NO";
  cout << endl;
}