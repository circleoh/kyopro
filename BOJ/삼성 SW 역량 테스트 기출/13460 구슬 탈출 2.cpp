#include <iostream>
#include <queue>
#define MAX 13
using namespace std;

int n,m;
int board[MAX][MAX] = {0};
int visited[MAX][MAX][MAX][MAX] = {0,};
int delta[4][2] = { {1,0}, {-1,0}, {0,1}, {0,-1} };
struct Status {
  int depth;
  int rx, ry, bx, by;
};
queue<Status> q;

void init() {
  cin.tie(NULL); ios::sync_with_stdio(false);
  cin >> n >> m;
  int rx, ry, bx, by;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      char c; cin >> c;
      if (c == '#') board[i][j] = 1;
      if (c == 'O') board[i][j] = 2;
      if (c == 'R') {rx=i; ry=j;}
      if (c == 'B') {bx=i; by=j;}
    }
  }
  q.push({0, rx, ry, bx, by});
  visited[rx][ry][bx][by] = 1;
}

int solve() {
  while (!q.empty()) {
    Status s = q.front(); q.pop();
    if (s.depth == 11) return -1;
    if (board[s.rx][s.ry] == 2) {
      if (board[s.bx][s.by] == 2) return -1;
      return s.depth;
    }
    
    for (int i=0; i<4; ++i) {
      int rx=s.rx, ry=s.ry, bx=s.bx, by=s.by;
      int dx = delta[i][0], dy = delta[i][1];
      while (1) {
        if (board[rx+dx][ry+dy] == 1 || board[rx][ry] == 2) break;
        rx += dx; ry += dy;
      }
      
      while (1) {
        if (board[bx+dx][by+dy] == 1 || board[bx][by] == 2) break;
        bx += dx; by += dy;
      }
      
      if (rx == bx && ry == by) {
        if (board[rx][ry] == 2) continue;
        int delta_r = abs(rx - s.rx) + abs(ry - s.ry);
        int delta_b = abs(bx - s.bx) + abs(by - s.by);
        if (delta_r > delta_b) {
          rx -= dx; ry -= dy;
        } else {
          bx -= dx; by -= dy;
        }
      }
      
      if (visited[rx][ry][bx][by]) continue;
      visited[rx][ry][bx][by] = 1;
      q.push({s.depth+1, rx, ry, bx, by});
    }
  }
  return -1;
}

int main() {
  init();
  cout << solve();
}