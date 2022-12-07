#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

bool comparator(vector <int> v1, vector <int> v2) {
  int sum1 = 0, sum2 = 0;

  for (int i = 0; i < v1.size(); ++i) {
    sum1 += v1[i];
  }
  for (int i = 0; i < v2.size(); ++i) {
    sum2 += v2[i];
  }

  if (sum1 == sum2) {
    if (v1.size() == v2.size()) {
      for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
          return v1[i] < v2[i];
        }
      }
    }
    return v1.size() < v2.size();
  }
  return sum1 < sum2;
}

int main() {
  int n;
  cin >> n;
  vector <vector<int>> vv;

  for (int i = 0; i < n; ++i) {
    int m; cin >> m;
    vector <int> temp;
    for (int j = 0; j < m; ++j) {
      int x;
      cin >> x;
      temp.push_back(x);
    }
    vv.push_back(temp);
  }

  sort(vv.begin(), vv.end(), comparator);

  for (int i = 0; i < vv.size(); ++i) {
    for (int j = 0; j < vv[i].size(); ++j) {
      cout << vv[i][j] << " ";
    }
    cout << endl;
  }
}