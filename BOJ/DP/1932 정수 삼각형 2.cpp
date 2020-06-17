//https://www.acmicpc.net/problem/1932

#include <cstdio>
#include <algorithm>

int num[501][501];
int dp[501][501];

int main()
{
  int c;
  scanf("%d", &c);

  for (int i=0; i<c; ++i) {
    for (int j=0; j<i+1; ++j) {
      int a; scanf("%d", &a);
      num[i][j] = a;
    }
  }

  for (int i=c-1; i>= 0; --i) {
    for (int j=0; j<=i; ++j) {
      dp[i][j] = num[i][j] + std::max(dp[i+1][j], dp[i+1][j+1]);
    }
  }
  printf("%d", dp[0][0]);
}