///ttps://www.acmicpc.net/problem/1149

#include <cstdio>
#include <vector>
using namespace std;
int dp[1000][3];

int main()
{
  int c;
  vector<int*> cost;
  scanf("%d", &c);

  for (int i=0; i<c; ++i) {
    int *co = new int[3];
    scanf("%d %d %d", co, co+1, co+2);
    cost.push_back(co);
  }

  for (int i=0; i<c; ++i) {
    dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + cost[i][0];
    dp[i][1] = min(dp[i-1][2], dp[i-1][0]) + cost[i][1];
    dp[i][2] = min(dp[i-1][1], dp[i-1][0]) + cost[i][2];
  }
  printf("%d", min(min(dp[c-1][0], dp[c-1][1]), dp[c-1][2]));
}