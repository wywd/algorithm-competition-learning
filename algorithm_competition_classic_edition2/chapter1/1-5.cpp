#include <cmath>
#include <cstdio>
int main() {
  const double pi = acos(-1.0);
  // const double pi = M_PI;
  double r, h, s1, s2, s;
  scanf("%lf%lf", &r, &h);
  s1 = pi * r * r;
  s2 = 2 * pi * r * h;
  s = s1 * 2 + s2;
  printf("Area = %.3f\n", s);
  return 0;
}