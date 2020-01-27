//https://www.acmicpc.net/problem/11726

#include <cstdio>
int ans[1000] = {1, 2, };

int main()
{
  int c;
  scanf("%d", &c);

  if (c==1 || c==2) {
    printf("%d", ans[c-1]);
    return 0;
  } else {
    for (int i=2; i<c; ++i) {
      ans[i] = (ans[i-1] + ans[i-2]) % 10007;
    }
  }
  printf("%d", ans[c-1]);
  return 0;
}