#include <iostream>
using namespace std;

int n, ans = 0;
char a[10][10];

void countCells(int column, int row) {
  a[row][column] = '*';
  ans++;

  if (row + 1 < n && a[row+1][column] == '.') {
    countCells(column, row + 1);
  }
  if (row - 1 >= 0 && a[row-1][column] == '.') {
    countCells(column, row - 1);
  }
  if (column + 1 < n && a[row][column + 1] == '.') {
    countCells(column + 1, row);
  }
  if (column - 1 >= 0 && a[row][column-1] == '.') {
    countCells(column - 1, row);
  }
}

int main() {
  int x, y;

  cin >> n >> x >> y;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> a[i][j];
    }
  }

  countCells(x - 1, y - 1);

  cout << ans << "\n";
}