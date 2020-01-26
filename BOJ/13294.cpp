//https://www.acmicpc.net/problem/13294

#include <iostream>
#include <cmath>
using namespace std;
string s;
 
int main()
{
  cin >> s;

  if (s == "1") cout << 1 << endl;
  else if (s == "2") cout << 2 << endl;
  else if (s == "6") cout << 3 << endl;
  else if (s == "24") cout << 4 << endl;
  else if (s == "120") cout << 5 << endl;
  else if (s == "720") cout << 6 << endl;
  else {
    double result = 0;
    for (int i = 1; i <= 1e6; ++i) {
      result += log10(i);
      if ( (int)result + 1 == s.size() ) {
        cout << i << endl;
        break;
      }
    }
  }
  return 0;
}