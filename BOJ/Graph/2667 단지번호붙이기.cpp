#include <bits/stdc++.h>
#define MAX 25
using namespace std;

int arr[MAX][MAX] = {0};
int visited[MAX][MAX] = {0};
int delta[4][2] = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};

int main() {
  int N;
  bool add = false;
  priority_queue<int> pq;
  int cnt = 0;
  scanf("%d\n", &N);
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      arr[i][j] = getchar() - '0';
    }
    getchar();
  }
  
  queue<pair<int, int> > q;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (arr[i][j] == 1 && !visited[i][j]) {
        q.push(make_pair(i, j));
        cnt = 0;
        add = true;
      
        while (!q.empty()) {
          add = true;
          int y = q.front().first, x = q.front().second;
          q.pop();
          visited[y][x] = 1;
          ++cnt;
          for (int t = 0; t < 4; ++t) {
            int ny = y + delta[t][0], nx = x + delta[t][1];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
              if (arr[ny][nx] == 1 && !visited[ny][nx]) {
                q.push(make_pair(ny, nx));
                visited[ny][nx] = 1;
              }
            }
          }
        }
      }
      
      if (add) {
        pq.push(cnt);
        add = false;
      }
    }
  }
  
  int cur = 0;
  stack<int> st;
  while (!pq.empty()) {
    st.push(pq.top());
    pq.pop();
    ++cur;
  }
  
  printf("%d\n", cur);
  while (!st.empty()) {
    printf("%d\n", st.top());
    st.pop();
  }
}
