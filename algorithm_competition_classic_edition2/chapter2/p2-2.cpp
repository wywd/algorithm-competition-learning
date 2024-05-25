#include <cstdio>
int main() {
  int a, b, c;
  while (scanf("%d%d%d", &a, &b, &c) == 3) {
    bool found = false;
    for (int i = 10; i <= 100; ++i) {
      if ((i % 3 == a) && (i % 5 == b) && (i % 7 == c)) {
        printf("%d\n", i);
        found = true;
        break;
      }
    }
    if (!found) {
      printf("No answer\n");
    }
  }
  return 0;
}