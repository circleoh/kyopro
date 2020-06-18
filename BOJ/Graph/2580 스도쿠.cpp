#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int arr[9][9];
bool flag = false;

bool check(int y, int x, int t) {
  //row
  for (int i = 0; i < 9; ++i) {
    if (t == arr[y][i]) return false;
  }
  //column
  for (int i = 0; i < 9; ++i) {
    if (t == arr[i][x]) return false;
  }
  //3 by 3
  int y0 = (y / 3) * 3, x0 = (x / 3) * 3;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      if (t == arr[i + y0][j + x0]) return false;
    }
  }
  return true;
}

void solve() {
  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      if (arr[i][j] == 0) {
        for (int x = 1; x <= 9; ++x) {
          if (check(i, j, x)) {
            arr[i][j] = x;
            solve();
            if (flag) return;
            arr[i][j] = 0;
          }
        }
        return;
      }
    }
  }
  flag = true;
  return;
}

void putsAns() {
  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      printf("%d ", arr[i][j]);
    }
    printf(endl);
  }
}

int main() {
  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      scanf(" %d", &arr[i][j]);
    }
  }
  
  solve();
  putsAns();
  return 0;
}
