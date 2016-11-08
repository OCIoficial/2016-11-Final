/*
 * -----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <nlehmann@dcc.uchile.cl> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return Nicolás Lehmann
 * -----------------------------------------------------------------------------
 */

#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;


int main() {
  int N, T, K, A;

  scanf("%d%d%d", &N, &T, &K);

  int S;
  scanf("%d", &S);

  scanf("%d", &A);
  vector<vector<int>> graph(N+1);
  for (int i = 0; i < A; ++i) {
    int u, v;
    scanf("%d%d", &u, &v);
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  int count = 0;
  queue<int> q;
  vector<int> time(N+1, -1);
  q.push(S);
  time[S] = 0;
  while (not q.empty()) {
    int n = q.front(); q.pop();

    if (time[n] > K)
      continue;

    count++;

    for (int v : graph[n]) {
      if (time[v] == -1) {
        time[v] = time[n] + 1;
        q.push(v);
      }
    }
  }

  printf("%d\n", count);

  return 0;
}
