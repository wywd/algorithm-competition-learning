// 蛇形方阵

#include <cstdio>
#include <cstring>
int main() {
  int n;
  scanf("%d", &n);
  int a[n][n];
  memset(a, 0, sizeof(a));
  int i = 0, j = n - 1, label = 0;
  for (int count = 1; count <= n * n; ++count) {
    a[i][j] = count;
    if (label == 0 && (i == n - 1 || a[i + 1][j] != 0)) {
      label = 1;
    } else if (label == 1 && (j == 0 || a[i][j - 1] != 0)) {
      label = 2;
    } else if (label == 2 && (i == 0 || a[i - 1][j] != 0)) {
      label = 3;
    } else if (label == 3 && (j == n - 1 || a[i][j + 1] != 0)) {
      label = 0;
    }
    switch (label) {
    case 0:
      ++i;
      break;
    case 1:
      --j;
      break;
    case 2:
      --i;
      break;
    case 3:
      ++j;
      break;
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      printf("%3d", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}