#include <iostream>
#include <map>

using namespace std;

int main() {
  int n; 
  double total = 0;
  cin >> n;
  map <string, int> mp;

  for (int i = 0; i < n; ++i) {
    int m;
    cin >> m;
    for (int j = 0; j < m; ++j) {
      string city;
      int amount;
      cin >> city >> amount;
      mp[city] += amount;
      total += amount;
    }
  }
  map <string, int> :: iterator it;
  for (it = mp.begin(); it != mp.end(); ++it) {
    cout << (*it).first << " " << ((*it).second / total) * 100 << endl;
  }
}