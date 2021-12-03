#include <stdio.h>

void GivenFunc() {
  float x;

  printf("Sisestage x v‰‰rtus: ");
  scanf("%f", &x);

  float sum = 0;
  float d = 1;
  for (int i = 1; i <= 30; i++) {
    sum += d;
    d *= x / i;
  }

  printf("%f\n", sum);
  return;
}

int main() {
  GivenFunc();

  return 0;
}
