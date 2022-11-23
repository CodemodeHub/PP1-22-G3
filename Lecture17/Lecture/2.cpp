#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
  map <string, int> mp;
  pair <string, int> p;
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int x;
    string s;
    cin >> s >> x;
    // p = {s, x};
    // p.first
    // p.second

    mp.insert({s, x});
  }

  cout << endl;

  // cout << mp["third"] << endl;

  map <string, int> :: iterator it;

  for (it = mp.begin(); it != mp.end(); ++it) {
    cout << (*it).first << " " << (*it).second << endl;
  }
}