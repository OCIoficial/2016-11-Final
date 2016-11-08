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
  int count = 0;
  for (int i = 0; i < A; ++i) {
    int u, v;
    scanf("%d%d", &u, &v);
    if (u == S or v == S)
      count++;
  }

  printf("%d\n", count + 1);

  return 0;
}
