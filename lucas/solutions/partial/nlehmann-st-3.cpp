/*
 * -----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <nlehmann@dcc.uchile.cl> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return Nicolás Lehmann
 * -----------------------------------------------------------------------------
 */

#include <cstdio>
#include <vector>
using namespace std;

int main() {
  int N, M;
  scanf("%d%d", &N, &M);

  vector<int> first(N);
  for (int i = 0; i < N; ++i)
    scanf("%d", &first[i]);

  vector<int> second(N);
  for (int i = 0; i < N; ++i)
    scanf("%d", &second[i]);

  int i = 0;
  int P = 0;
  while (i < N and first[i] == second[i])
    P++, i++;

  int S = 0;
  i = N-1;
  while (i >= 0 and first[i] == second[i])
    S++, i--;

  printf("%d\n", N - min(N, P + S));
}
