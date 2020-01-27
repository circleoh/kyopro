//https://www.acmicpc.net/problem/2156

#include <cstdio>
#include <algorithm>
int podo[10001], cost[10001];

int main()
{
  int c;
  scanf("%d", &c);
  for (int i=0; i<c; ++i) {
    scanf("%d", podo+i+1);
  }

  cost[1] = podo[1];
  cost[2] = podo[1] + podo[2];

  if (c == 1 || c == 2) {
    printf("%d", cost[c]);
    return 0;
  }

  for (int i=3; i<=c; ++i) {
    cost[i] = std::max(cost[i-2] + podo[i], cost[i-3] + podo[i-1] + podo[i]);
    cost[i] = std::max(cost[i], cost[i-1]);
  }

  printf("%d", cost[c]);
}