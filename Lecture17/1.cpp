#include <iostream>
#include <set>

using namespace std;

int main() {
  set <char> s;
  string st;
  cin >> st;

  for (int i = 0; i < st.size(); ++i) s.insert(st[i]);

  set <char> :: iterator it;

  for (it = s.begin(); it != s.end(); ++it) {
    cout << char(*it + 32); 
  }
  
  cout << endl;
}