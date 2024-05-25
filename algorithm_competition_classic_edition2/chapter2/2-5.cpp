#include <cstdio>
int main() {
  int n2, count;
  scanf("%d", &n2);
  long long n = n2;
  while (n != 1) {
    ++count;
    if (n % 2 == 1) {
      n = n * 3 + 1;
    } else {
      n /= 2;
    }
  }
  printf("%d\n", count);
  return 0;
}