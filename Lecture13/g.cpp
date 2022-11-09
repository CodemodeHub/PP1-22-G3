#include <iostream>
using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;

    for (int j = x; j <= x1; ++j) {
      for (int z = y; z <= y1; ++z) {
        a[j][z] = 0;
      }
    }
  }
  
  for (int j = x; j <= x1; ++j) {
    for (int z = y; z <= y1; ++z) {
      cnt += a[j][z];
    }
  }
}
