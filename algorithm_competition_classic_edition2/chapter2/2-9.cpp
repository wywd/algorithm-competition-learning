#include <cstdio>
int main() {
  int n, count = 0;
  int min = 1001, max = -1;
  double avg = 0;
  while (scanf("%d", &n) == 1) {
    if (min > n) {
      min = n;
    }
    if (max < n) {
      max = n;
    }
    avg += n;
    count++;
  }
  printf("%d %d %f\n", min, max, avg / count);
  return 0;
}