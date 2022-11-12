#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> v;
  
  for (int i = 0; i < n; ++i) {
    vector<int> temp;
    int m;
    cin >> m;
    for (int j = 0; j < m; ++j) {
      int x;
      cin >> x;
      temp.push_back(x);
    }
    v.push_back(temp);
  }
  cout << endl;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < v[i].size(); ++j) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}