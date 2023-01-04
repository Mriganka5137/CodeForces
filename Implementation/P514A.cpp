#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '9' && i == 0)
    {
      continue;
    }

    if ('9' - s[i] < s[i] - '0')
    {
      s[i] = '9' - s[i] + '0';
    }
  }
  cout << s << endl;
  /*
    char c = 65;
    cout << c << endl;     // ----------> output = A
    cout << c + 5 << endl; //--------------> output = 65 ('+' operator typecasts the char into integer)

    c = char(c + 5);
    int n = c + 5;     // int n = 65 + 5 = 70
    cout << c << endl; // ----------> output = A
    cout << n << endl; // ----------> output = A
  */

  char c = '7';
  cout << '9' - c;

  return 0;
}