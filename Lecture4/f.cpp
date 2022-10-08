// Problem F: 105808. Birthday party!
// Today is Aksunkar’s birthday! Aksunkar has a box. She wants to put balls in a box. Help her write a program that determines if a given point falls into this field (rectangle). The sides of the rectangle are parallel to the coordinate axes.

// Input format
// First, the coordinates of the upper left corner of the rectangle are entered from the keyboard, then the lower right and, at the end, the coordinates of the point.

// Output format
// All coordinates are integers modulo not exceeding 10000. The program should print the word yes if the point is inside the rectangle (the boundaries are counted), and no otherwise

#include <iostream>
using namespace std;

int main() {
  int x1, y1, x2, y2, x3, y3;

  cin >> x1 >> y1 >> x2 >> y2;

  if ((x1 <= x2 && x2 <= x3 || x2 <= x3 && x2 >= x1) && (y1 <= y2 && y2 <= y3 || y2 <= y3 && y2 >= y1)) {
    cout << "yes";
  } else cout << "no";
}