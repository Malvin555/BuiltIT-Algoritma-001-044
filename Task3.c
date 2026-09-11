#include <stdio.h>

int main() {
  long long N;
  scanf("%lld", &N);

  for (long long k = 1; k <= N; k++) {
    long long hasil = k * k * (k - 1) * (k - 1) / 2;
    printf("%lld\n", hasil);
  }
  return 0;
}
