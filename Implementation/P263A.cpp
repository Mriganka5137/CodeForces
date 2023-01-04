#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n = 5;
  int arr[5][5];
  int col, row;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int ele;
      cin >> ele;
      if (ele == 1)
      {
        row = i;
        col = j;
      }
      arr[i][j] = ele;
    }
  }
  int count = 0;
  if (row >= 2)
    count = row - 2;
  else
  {
    count = 2 - row;
  }

  if (col >= 2)
  {
    count += col - 2;
  }
  else
  {
    count += 2 - col;
  }

  cout << count;

  return 0;
}