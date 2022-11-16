#include <iostream>
#include <algorithm>
using namespace std;

const int d = 1e4;
string students[d];
int lmao = 0;

void markStudent(string student, int size) {
  for (int i = 0; i < size; ++i) {
    if (student == students[i]) {
      students[i] = "";
      lmao++;
      break;
    }
  }
}

int main() {
  int n, m;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> students[i];
  }
  
  cin >> m;
  string b[m];
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }

  for (int i = 0; i < m; ++i) {
    markStudent(b[i], n);
  }
  
  sort(students, students + n);

  cout << "Missed students:" << endl;
  for (int i = 0; i < n; ++i) {
    if (students[i] != "") {
      cout << "- " << students[i] << endl;
    }
  }

  int half;
  if (n % 2 == 0) half = n / 2;
  else half = n / 2 + 1;

  if (lmao >= half) {
    cout << "Alikhan is OK" << endl;
  } else cout << "Alikhan is angry" << endl;

}