#include <cstdio>
int main() {
  int n, m, a, b;
  scanf("%d%d", &n, &m);
  a = (4 * n - m) / 2;
  b = n - a;
  if (m % 2 == 1 || a < 0 || b < 0) {
    printf("No anwser\n");
  } else {
    printf("%d %d\n", a, b);
  }
  return 0;
}