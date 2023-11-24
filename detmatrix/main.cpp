#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lib.h"


int main() {
  int n, i, deter;

  srand(time(0));
  test_determ();
  printf("Enter n matrix \n");
  scanf("%d", &n);
  int** matrx1 = random_create(n);

  printf("Matrix a\n");
  show_matrx(matrx1, n);
  deter = calculateDeterm(matrx1, n);
  printf("determinant:%d\n", deter);

  free_matrix(matrx1, n);
  return 0;
}
