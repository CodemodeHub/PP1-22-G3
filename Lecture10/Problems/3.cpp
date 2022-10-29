#include <iostream>
#include <algorithm>
using namespace std;

void displayMarks(string s) {
  int a[10] = {0}; 

  for(int i = 0; i < s.size(); i++) {
    a[s[i] - 48]++; 
  }

  for(int i = 0; i < 10; i++) {
    if(a[i] != 0){
      cout << i << ": " << a[i] << "\n";
    }
  }
}

int main() {
  string s;
  cin >> s;
  displayMarks(s);
}