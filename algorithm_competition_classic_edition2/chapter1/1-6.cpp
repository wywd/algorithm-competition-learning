#include <cstdio>
int main() {
  int n;
  scanf("%d", &n);
  int a = n % 10;
  int b = n / 10 % 10;
  int c = n / 100 % 10;
  printf("%d%d%d\n", a, b, c);
  return 0;
}