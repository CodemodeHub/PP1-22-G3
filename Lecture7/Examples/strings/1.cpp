#include <iostream>
using namespace std;

int main() {
  string s = "Crieative Creative Creative Creative";

  string ex = "ive";

  // string s = "fgnsdjkgndkjgnjdfk";

  // int firstInd = s.find()

  // cout << s.find("ive") << endl;

  int par = 0, cnt = 0;
  // cout << s.find("ive", par) << endl; 

  // par =  s.find("ive")

  int n = 0;
  
  while ((par = (s.find("ive", par))) != string::npos) {
    cnt++;
    cout << par << " ";
    par++;
  }
  
  cout << endl;

  cout << cnt << endl;

}