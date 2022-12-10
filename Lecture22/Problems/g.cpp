#include <iostream>
#include <map>

using namespace std;

int main() {
  int n; 
  cin >> n;
  map <pair<string, int>, int> mp;

  for (int i = 0; i < n; ++i) {
    string name1, name2;
    int points1, points2;
    cin >> name1 >> points1 >> name2 >> points2;

    string team = name1 + " and " + name2;
    int totalPoints = points1 + points2;

    mp[{team, totalPoints}] = 1;
  }

  map <pair<string, int>, int> :: iterator it;
  for (it = mp.begin(); it != mp.end(); ++it) {
    cout << (*it).first.first << " " << (*it).first.second << endl;
  }
}