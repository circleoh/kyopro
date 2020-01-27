//https://www.acmicpc.net/problem/2193

#include <cstdio>
#include <vector>
using namespace std;
long long dp_zero[91] = {1, };
long long dp_one[91] = {1, };

int main()
{
  int c;
  scanf("%d", &c);

  for (int i=1; i<c; ++i) {
    dp_zero[i] = dp_one[i-1] + dp_zero[i-1];
    dp_one[i] = dp_zero[i-1];
  }

  printf("%lld", dp_one[c-1]);
}