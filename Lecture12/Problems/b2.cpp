#include <iostream>
using namespace std;

void isInRectangle(int x, int y, int x1, int y1, int x2, int y2) {
  if (x2 >= x && x2 <= x1 && y2 <= y && y2 >= y1) {
    cout << "yes";
  } else cout << "no";
}

int main() {
  int x, y, x1, y1, x2, y2;
  cin >> x >> y >> x1 >> y1 >> x2 >> y2;

  isInRectangle(x, y, x1, y1, x2, y2);
}