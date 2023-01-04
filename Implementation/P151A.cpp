#include <bits/stdc++.h>
using namespace std;
int main()
{

  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int t1 = (k * l) / nl;
  int t2 = (c * d) / 1;
  int t3 = p / np;

  int toast = min(t1, min(t2, t3)) / n;
  cout << toast;

  return 0;
}