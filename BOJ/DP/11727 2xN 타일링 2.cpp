//https://www.acmicpc.net/problem/11727

#include <cstdio>
int dp[1001] = {0, 1, 3, };

int run(int c)
{
  if (c == 1 || c == 2) return dp[c];
  for (int i=3; i <= c; ++i) {
    dp[i] = (dp[i-1] + dp[i-2] * 2) % 10007;
  }
  return dp[c];
}

int main()
{
  int c;
  long sum=0;
  scanf("%d", &c);
  printf("%d", run(c) % 10007);
}