/*
 * -----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <nlehmann@dcc.uchile.cl> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return Nicolás Lehmann
 * -----------------------------------------------------------------------------
 */

#include <cstdio>

int main () {
  int N;
  scanf("%d", &N);

  int X = 0, Y = 0;
  for (int i = 0; i < N; ++i) {
    int A, D;
    scanf("%d%d", &A, &D);
    if (A <= D) X++;
    else Y++;
  }
  printf("%d %d\n", X, Y);
}

