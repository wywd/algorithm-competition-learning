#include <cstdio>
int main() {
  for (int n = 100; n < 1000; n++) {
    int i = n / 100;
    int j = n / 10 % 10;
    int k = n % 10;
    if (n == i * i * i + j * j * j + k * k * k) {
      printf("%d\n", n);
    }
  }
  return 0;
}