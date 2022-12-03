#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  int q;
  cin >> q;

  int m;

  cout << m;

  map <string, int> mp;

  for (int i = 0; i < q; ++i) {
    int query_type;
    cin >> query_type;

    string name;
    cin >> name;

    if (query_type == 1) {
      int mark;
      cin >> mark;
      mp[name] += mark;
    } else if (query_type == 2) {
      mp[name] = 0;
    } else {
      cout << mp[name] << endl;
    }
  }
}