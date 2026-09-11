#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  long long A, B;
  scanf("%lld %lld", &A, &B);

  __int128 tambah = (__int128)A + B;
  __int128 kurang = (__int128)A - B;
  __int128 kali = (__int128)A * B;

  if (tambah >= kurang && tambah >= kali) {
    printf("+\n");
  } else if (kurang >= tambah && kurang >= kali) {
    printf("-\n");
  } else {
    printf("*\n");
  }

  return 0;
}
