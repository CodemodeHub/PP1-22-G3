#include <set>
#include <iostream>

using namespace std;

int main() {
  set <int> s;
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    cout << s.insert(x).second;
  }

  set <int> :: iterator nl;

  for (nl = s.begin(); nl != s.end(); ++nl) {
    cout << *nl << " ";
  }

  cout << endl;
}