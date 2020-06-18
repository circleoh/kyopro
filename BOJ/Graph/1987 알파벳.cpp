#include <bits/stdc++.h>
#define endl "\n"
#define ALPHALEN 26
using namespace std;
int R, C;
int ret = 0, cur = 1;
int visited[ALPHALEN] = {0};
vector<vector<char> > v;

inline bool isValid(int y, int x) {
  return visited[v[y][x] - 'A'] == 0;
}

void dfs(int y, int x) {
  ret = max(ret, cur);
  int delta[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
  for (int i = 0; i < 4; ++i) {
    int ny = y + delta[i][0], nx = x + delta[i][1];
    if (ny < 0 || ny >= R || nx < 0 || nx >= C) continue;
    if (isValid(ny, nx)) {
      ++cur;
      visited[v[ny][nx] - 'A'] = 1;
      dfs(ny, nx);
      visited[v[ny][nx] - 'A'] = 0;
      --cur;
    }
  }
}

int main() {
  scanf("%d %d\n", &R, &C);
  v.resize(R);
  for (int i = 0; i < R; ++i) {
    v[i].resize(C);
    for (int j = 0; j < C; ++j) {
      v[i][j] = getchar();
    }
    getchar();
  }
  
  visited[v[0][0] - 'A'] = 1;
  dfs(0, 0);
  cout << ret << endl;
}
