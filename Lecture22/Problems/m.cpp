#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector <int> v1, v2;
  
  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    v1.push_back(x);
  }
  
  for (int i = 0; i < m; ++i) {
    int x; cin >> x;
    v2.push_back(x);
  }
  
  vector <int> :: iterator it;
  it = unique(v1.begin(), v1.end());
  v1.resize(distance(v1.begin(), it));

  it = unique(v2.begin(), v2.end());
  v2.resize(distance(v2.begin(), it));

  vector <int> ans;

  for (int i = 0; i < min(v1.size(), v2.size()); ++i) {
    ans.push_back(v1[i]);
    ans.push_back(v2[i]);
  }

  if (v1.size() < v2.size()) {
    for (int i = v1.size(); i < v2.size(); ++i) {
      ans.push_back(v2[i]);
    }
  } else {
    for (int i = v2.size(); i < v1.size(); ++i) {
      ans.push_back(v1[i]);
    }
  }

  it = unique(ans.begin(), ans.end());
  ans.resize(distance(ans.begin(), it));

  for (int i = 0; i < ans.size(); ++i) {
    cout << ans[i] << " ";
  }

  cout << endl;
}