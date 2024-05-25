#include <cstdio>
#include <cstring>
int main() {
  int n, k, first = 1;
  scanf("%d%d", &n, &k);
  int a[n + 1];
  memset(a, 0, sizeof(a)); // Initialize the array with 0
  for (int i = 1; i <= k; ++i) {
    for (int j = 1; j <= n; ++j) {
      if (j % i == 0) {
        a[j] = !a[j];
      }
    }
  }
  for (int i = 1; i <= n; ++i) {
    if (a[i]) {
      if (first) {
        first = 0;
        printf("%d", i);
      } else {
        printf(" %d", i);
      }
    }
  }
  printf("\n");
  return 0;
}