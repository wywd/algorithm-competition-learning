#include <cstdio>
int main() {
  int m, n, count = 0;
  while (scanf("%d%d", &n, &m) == 2 && n != 0 && m != 0) {
    float sum = 0;
    for (long i = n; i <= m; i++) {
      sum += 1.0 / (i * i);
    }
    printf("Case %d: %.5f\n", ++count, sum);
  }
  return 0;
}