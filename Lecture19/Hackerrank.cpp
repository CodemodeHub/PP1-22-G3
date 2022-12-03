#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  int q;
  cin >> q;

  map <string, vector<int>> mp;

  for (int i = 0; i < q; ++i) {
    int query_type;
    cin >> query_type;

    string name;
    cin >> name;

    if (query_type == 1) {
      int mark;
      cin >> mark;
      mp[name].push_back(mark);
    } else if (query_type == 2) {
      mp[name].clear();
    } else {
      int sum = 0;
      vector <int> vv = mp[name];
      for (int j = 0; j < vv.size(); ++j) {
        sum += vv[j];
      }
      cout << sum << endl;
    }
  }
}