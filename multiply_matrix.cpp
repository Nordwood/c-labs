#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

void test_multi(){
int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int s[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 11 };
//int **a = (int*)malloc(n*n * sizeof(int));
//int **s = multiply_matrx(matrx1, matrx2, a, n)
int k[3][3] = {30, 36, 48, 66, 81, 108, 102, 126, 168};
if (s == k){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
}

void matrix_multiplication(int **a, int **b, int **result, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int random_create(int **a , int n){
  int i, j;
    for (i = 0; i<n; i++)
  {a[i] = (int*) malloc((i + 1) * sizeof(int));
    for (j = 0; j<n; j++)
    {
      a[i][j] = rand()%100;
    }
  }
   return a;
}


void show_matrx(int **a, int n){
  int i, j;
  for (i = 0; i<n; i++)
  {
    for (j = 0; j<n; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}


int main()
{

 int i, j, n;

  srand(time(0));
  printf("Enter n matrix \n");
  scanf("%d", &n);
  int **a = (int*)malloc(n*n * sizeof(int));
  int **matrx1 = random_create(a, n);
  int **matrx2 = random_create(a, n);
  printf("Matrix a\n");
  show_matrx(matrx1, n);
  printf("Matrix b\n");
  show_matrx(matrx2, n);
  int** result = (int**)malloc(n * sizeof(int*));
  for (int i = 0; i < n; i++) {
    result[i] = (int*)malloc(n * sizeof(int));}
  matrix_multiplication(matrx1, matrx2, result, n);
  printf("multiply:\n");
  show_matrx(result, n);
   for (int i = 0; i < n; i++) {
        free(matrx1[i]);}
    free(matrx1);
    for (int i = 0; i < n; i++) {
        free(matrx2[i]);}
    free(matrx2);
    for (int i = 0; i < n; i++) {
        free(result[i]);}
    free(result);


  return 0;
}
