//https://www.acmicpc.net/problem/9461

#include <stdio.h>
 
int main(void){
  int c, i, n; long long dp[101] = { 1, 1, 1, 1, 2, 2, };
  scanf("%d",&c);
  for (i = 6; i <= 100; ++i) dp[i] = dp[i-1] + dp[i-5];

  while (c--) {
    scanf("%d", &n);
    printf("%lld\n", dp[n]);
  }
}