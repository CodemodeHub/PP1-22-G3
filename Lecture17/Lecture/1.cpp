#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
  map <string, vector<int>> mp;
  int n;
  cin >> n;

  vector <int> v = {1, 2, 3};

  // for (int i = 0; i < n; ++i) {
  //   int x;
  //   string s;
  //   cin >> s >> x;
  //   mp[s] = x;
  // }

  cout << endl;
  mp["first"] = v;

  // cout << mp["third"] << endl;

  map <string, vector<int>> :: iterator it;

  for (it = mp.begin(); it != mp.end(); ++it) {
    cout << (*it).first << endl;
    vector <int> temp = (*it).second;
    for (int i = 0; i < temp.size(); ++i) {
      cout << temp[i] << " ";
    }
    cout << endl;
  }
}