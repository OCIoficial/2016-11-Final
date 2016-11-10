/*
 * -----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <nlehmann@dcc.uchile.cl> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return Nicolás Lehmann
 * -----------------------------------------------------------------------------
 */

#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

int main () {
  int N, M;
  scanf("%d%d", &N, &M);

  vector<int> first(N);
  for (int i = 0; i < N; ++i)
    scanf("%d", &first[i]);

  vector<int> second(M);
  for (int i = 0; i < M; ++i)
    scanf("%d", &second[i]);

  int P = 0;
  int i = 0;
  while (i < min(N, M) and first[i] == second[i]) ++P, ++i;

  int S = 0;
  i = 0;
  while (i < min(N, M) and first[N - i - 1] == second[M - i - 1]) ++S, ++i;

  printf("%d\n", M - min(N, min(M, P + S)));
}
