#include <set>
#include <iostream>

using namespace std;

int main() {
  set <int> s;
  set <char> sc;
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    s.insert(x);
  }

  cin >> n; 
  for (int i = 0; i < n; ++i) {
    char x; cin >> x;
    sc.insert(x);
  }

  set <int> :: iterator nl;
  set <char> :: reverse_iterator nc;

  for (nl = s.begin(); nl != s.end(); ++nl) {
    cout << *nl << " ";
  }
  
  for (nc = sc.rbegin(); nc != sc.rend(); ++nc) {
    cout << *nc << " ";
  }

  cout << endl;
}