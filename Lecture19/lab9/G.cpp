#include <iostream>
#include <queue>

using namespace std;

int main() {
  string sequence;
  cin >> sequence;

  queue <char> q;

  for (int i = 0; i < sequence.size(); ++i) {
    q.push(sequence[i]);

    if (q.front() == '0' || q.back() == '0') {
      cout << q.front();
      q.pop(); 
    }
    
    if (q.size() == 2) {
      q.pop(); q.pop();
    }

    if (i == sequence.size() - 1 && q.size() == 1) {
      cout << q.front();
    }
  }
}