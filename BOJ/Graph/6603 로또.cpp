#include <bits/stdc++.h>
using namespace std;
constexpr int MAX = 13;
int c;
int arr[MAX];
int ans[6];

void dfs(int pos, int cur) {
  if (pos == 6) {
    for (int i = 0; i < 6; ++i) {
      printf("%d ", ans[i]);
    }
    printf("\n");
  } else {
    for (int i = cur + 1; i < c; ++i) {
      ans[pos] = arr[i];
      dfs(pos + 1, i);
    }
  }
}

int main() {
  while (1) {
    scanf(" %d", &c);
    if (c == 0) return 0;
    for (int i = 0; i < c; ++i) {
      scanf(" %d", &arr[i]);
    }
    dfs(0, -1);
    printf("\n");
  }
}
