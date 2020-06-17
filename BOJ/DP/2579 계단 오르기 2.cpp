//https://www.acmicpc.net/problem/2579

#include <cstdio>
#include <algorithm>

int c;
int cost[301], stair[301];

int main()
{
  scanf("%d", &c);
  for (int i=0; i<c; ++i) {
    scanf("%d", &stair[i]);
  }
  
  cost[0] = stair[0];
  cost[1] = stair[1] + stair[0];
  cost[2] = stair[2] + std::max(stair[0], stair[1]);
  
  for (int i=3; i<c; ++i) {
    cost[i] = std::max(cost[i-3] + stair[i-1] + stair[i], cost[i-2] + stair[i]);
  }
  
  printf("%d", cost[c-1]);
}