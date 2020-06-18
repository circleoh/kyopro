//////////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,j,k) for (int i=j; i<k; ++i)
#define FORD(i,j,k) for (int i=j; i>=k; --i)
#define ll long long
#define pi pair<int, int>
#define vi vector<int>
#define si stack<int>
#define pb push_back
#define mp make_pair
#define endl "\n"
#define VAR(i,n) __typeof(n) i = (n)
#define FOREACH(i,c) for (VAR(i,(c).begin()); i!=(c).end(); ++i)
#define FORDEACH(i,c) for (VAR(i,(c).rbegin()); i!=(c).rend(); ++i)
#define REP(i,n) FOR(i,0,n)
#define ld long double
constexpr int INF = 1000000009;
constexpr long long INFLL = (ll)INF * (ll)INF;
constexpr ld EPS = 10e-9;
//////////////////////////////////////////////////////////////////

constexpr int MAX = 1000;

int main() {
  bool visited[MAX] = {0};
  int N, M, a, b;
  vector<vi> graph;
  scanf("%d %d", &N, &M);
  graph.resize(N);
  FOR(i, 0, M) {
    scanf(" %d %d", &a, &b);
    graph[a - 1].pb(b - 1);
    graph[b - 1].pb(a - 1);
  }
  
  si cur;
  int ret = 0;
  FOR(i, 0, N) {
    if (!visited[i]) {
      cur.push(i);
      ++ret;
      while (!cur.empty()) {
        int x = cur.top();
        cur.pop();
        FOREACH(t, graph[x]) {
          if (!visited[*t]) {
            visited[*t] = true;
            cur.push(*t);
          }
        }
      }
    }
  }
  cout << ret << endl;
  return 0;
}
