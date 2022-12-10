#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n; 
  cin >> n;
  vector <int> v;

  for (int i = 0; i < n; ++i) {
    int m;
    cin >> m;
    if (find(v.begin(), v.end(), m) == v.end()) {
      v.push_back(m);
    }
  }

  do {
    for (int i = 0; i < v.size(); ++i) {
      cout << v[i] << " ";
    } 
    cout << endl;
  } while (next_permutation(v.begin(), v.end()));
}