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

int main() {
  int N, F;
  scanf("%d%d", &N, &F);

  vector<int> slopes(N);
  for (int i = 0; i < N; ++i)
    scanf("%d", &slopes[i]);

  for (int i = 0; i < F; ++i) {
    int slope;
    scanf("%d", &slope);

    int l = 0, r = N;
    while (l < r) {
      int m = (l + r)/2;
      if (slope > slopes[m])
        r = m;
      else
        l = m + 1;
    }

    printf("%d\n", l);
  }
}
