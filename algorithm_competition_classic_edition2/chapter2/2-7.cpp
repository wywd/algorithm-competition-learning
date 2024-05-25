#include <cstdio>
int main() {
  int n;
  scanf("%d", &n);
  long long S = 0, temp = 1;
  for (int i = 1; i <= n; i++) {
    temp *= i;
    S += temp;
  }
  printf("%lld\n", (S % 1000000));
  return 0;
}