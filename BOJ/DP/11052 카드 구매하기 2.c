//https://www.acmicpc.net/problem/11052

#include <stdio.h>

int main() {
  int c, cost[1002]={0}, dp[1002]={0}; scanf("%d", &c);
  for (int i=1; i<=c; ++i) scanf("%d", cost+i);
  
  for (int i=1; i<=c; ++i) {
    int r = cost[1] + dp[i-1];
    for (int j=1; j<=i; ++j) {
      if (r < cost[j] + dp[i-j]) r = cost[j] + dp[i-j];
    }
    dp[i] = r;
  }
  printf("%d", dp[c]);
}