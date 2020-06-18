#include <bits/stdc++.h>

using namespace std;
constexpr int MAX = 100001;
int N, M;
bool visited[MAX] = {false};
queue<int> q;

int solve() {
  int lev = 0, seg = 1;
  int size = 0;
  bool add = false;
  while (!q.empty()) {
    size = 0;
    add = false;
    while (seg--) {
      int x = q.front();
      q.pop();
      visited[x] = true;
      if (x == M) return lev;
      
      if (x + 1 < MAX && !visited[x + 1]) {
        q.push(x + 1);
        ++size;
        add = true;
      }
      
      if (x - 1 >= 0 && !visited[x - 1]) {
        q.push(x - 1);
        ++size;
        add = true;
      }
      
      if (x * 2 < MAX && !visited[x * 2]) {
        q.push(x * 2);
        ++size;
        add = true;
      }
    }
    seg = size;
    if (add) ++lev;
  }
  return -1;
}

int main() {
  scanf("%d %d", &N, &M);
  q.push(N);
  cout << solve() << endl;;
  return 0;
}
