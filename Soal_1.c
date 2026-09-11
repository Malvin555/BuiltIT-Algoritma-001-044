#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int A, B, C;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  if (A - B == C) {
    printf("-");
  } else if (A + B == C) {
    printf("+");
  } else if (A * B == C) {
    printf("*");
  }

  return 0;
}
