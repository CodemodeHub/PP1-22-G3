#include <iostream>
using namespace std;

bool isVowels(char c)
{
  return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y';
}

int main()
{
  int n;
  cin >> n;
  string a[n];

  string magicString = "";
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    int sz = a[i].size();
    int vowels = 0;
    for (int j = 0; j < a[i].size(); j++)
    {
      if (isVowels(a[i][j]))
        vowels++;
    }
    magicString += a[i][sz - vowels];
  }
  cout << magicString << "\n";
}