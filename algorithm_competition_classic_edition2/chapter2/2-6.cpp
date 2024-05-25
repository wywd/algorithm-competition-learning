#include <cinttypes>
#include <cstdio>
int main() {
  double sum = 0, item = 0;
  int n = 1;
  do {
    item = 1.0 / (2 * n - 1);
    if (n % 2 == 1) {
      sum += item;
    } else {
      sum -= item;
    }
    ++n;
  } while (item >= 1e-6);
  printf("%.6f\n", sum);
  return 0;
}