#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
  return n == 2 || n == 3 || n == 5 || n == 7;
}

vector<int> v;
vector<int> goodNumbers(int n, int m)
{
  string s = to_string(n);
  bool ok = true;
  // 27
  for (int i = 0; i < s.size(); i++)
  {
    if (i % 2 == 0 && (s[i] - 48) % 2 == 0)
      continue;
    if (i % 2 != 0 && isPrime(s[i] - 48))
      continue;
    else
      ok = false;
  }

  if (ok == true)
  {
    int a = stoi(s);
    v.push_back(a);
  }

  if (n == m)
    return v;
  return goodNumbers(n + 1, m);
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> res = goodNumbers(n, m);
  for (int i = 0; i < res.size(); i++)
  {
    cout << res[i] << " ";
  }
}