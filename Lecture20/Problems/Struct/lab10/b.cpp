#include <bits/stdc++.h>

using namespace std;
// #define diana long long;

long long i = -1;
long long funi()
{
  i++;
  return pow(i, i);
}

int main()
{
  int n;
  cin >> n;
  vector<long long> v(n + 1);
  generate(v.begin(), v.end(), funi);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}