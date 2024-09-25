#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long unlong;

unlong fibbi(int n) {

  unlong num1 = 0;
  unlong num2 = 1;
  unlong sum;
  if (n <= 1) {
    return 0;
  } else {
    for (int ix = 1; ix < n - 1; ++ix) {
      sum = num1 + num2;
      num1 = num2;
      num2 = sum;
    }
    return sum;
  }
}

unlong fibbr(int n) {

  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }

  return fibbr(n - 1) + fibbr(n - 2);
}

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]);

  if (*argv[2] == 'i') {
    printf("%lld", fibbi(n));
  } else if (*argv[2] == 'r') {
    printf("%lld", fibbr(n - 1));
  }

  return 0;
}