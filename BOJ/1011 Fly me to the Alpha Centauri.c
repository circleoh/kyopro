#include <stdio.h>

int run(int length) {
  int i=0, j=0;
  while (length > 0) {
    if (i%2 == 0) ++j;
    length -= j;
    ++i;
  }
  return i;
}

int main() {
  int n, i=0, a, b; scanf("%d", &n);
  for (; i<n; i++) {
    scanf("%d %d", &a, &b);
    printf("%d\n", run(b-a));
  }
}
