#include <stdio.h>
#include <stdlib.h>



int calculateDeterm(int** matrix, int size) {
  int det = 0;
  if (size == 1) {
    return matrix[0][0];
  }
  if (size == 2) {
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
  }
  int** tempMat;
  int sign = 1;
  int i, j, k;
  tempMat = (int**)malloc((size - 1) * sizeof(int*));
  for (i = 0; i < size - 1; i++) {
    tempMat[i] = (int*)malloc((size - 1) * sizeof(int));
  }
  for (k = 0; k < size; k++) {
    int temp_i = 0, temp_j = 0;
    for (i = 1; i < size; i++) {
      for (j = 0; j < size; j++) {
        if (j != k) {
          tempMat[temp_i][temp_j] = matrix[i][j];
          temp_j++;
        }
      }
      temp_i++;
      temp_j = 0;
    }
    det += sign * matrix[0][k] * calculateDeterm(tempMat, size - 1);
    sign = -sign;
  }
  for (i = 0; i < size - 1; i++) {
    free(tempMat[i]);
  }
  free(tempMat);
  return det;
}

void test_determ() {


  int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int i, j;
  int** bmatrx = (int**)malloc(3 * sizeof(int*));
  for (i = 0; i < 3; i++) {
    bmatrx[i] = (int*)malloc((3 + 1) * sizeof(int));
    for (j = 0; j < 3; j++) {
      bmatrx[i][j] = b[i][j];
    }
  }
  int s[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 11}};
    int** smatrx = (int**)malloc(3 * sizeof(int*));
  for (i = 0; i < 3; i++) {
    smatrx[i] = (int*)malloc((3 + 1) * sizeof(int));
    for (j = 0; j < 3; j++) {
      smatrx[i][j] = s[i][j];
    }
  }

  int l[1][1] = {{2}};
   int** lmatrx = (int**)malloc(1 * sizeof(int*));
  for (i = 0; i < 1; i++) {
    lmatrx[i] = (int*)malloc((1 + 1) * sizeof(int));
    for (j = 0; j < 1; j++) {
      lmatrx[i][j] = l[i][j];
    }
  }


  if (calculateDeterm(bmatrx, 3) == 0) {
    printf("ok\n");
  } else {
    printf("test failed\n");
  }
  if (calculateDeterm(smatrx, 3) == -6) {
    printf("ok\n");
  } else {
    printf("test failed\n");
  }
   if (calculateDeterm(lmatrx, 1) == 2) {
    printf("ok\n");
  } else {
    printf("test failed\n");
  }
}

int** random_create(int n) {
  int i, j;
  int** a = (int**)malloc(n * sizeof(int*));
  for (i = 0; i < n; i++) {
    a[i] = (int*)malloc((n + 1) * sizeof(int));
    for (j = 0; j < n; j++) {
      a[i][j] = rand() % 100;
    }
  }
  return a;
}

void show_matrx(int** a, int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
