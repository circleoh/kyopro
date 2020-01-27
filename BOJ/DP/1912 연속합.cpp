//https://www.acmicpc.net/problem/1912

#include <cstdio>
#include <algorithm>
int num[100000];

int main()
{
  int c, partial_sum=0, ans = -10000;
  scanf("%d", &c);
  for (int i=0; i<c; ++i) {
    scanf("%d", num+i);
  }

  for (int i=0; i<c; ++i) {
    partial_sum = std::max(0, partial_sum) + num[i];
    ans = std::max(partial_sum, ans);
  }

  printf("%d", ans);
}