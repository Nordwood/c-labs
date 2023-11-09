#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
void test_determ(){
int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int s[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 11 };
if (calculateDeterm(a, 9) == 0){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
if (calculateDeterm(s, 10) == -6){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
}
int calculateDeterm(int **matrix, int size){
int det = 0;
if (size == 2)
 {return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];}
int **tempMat;
int sign = 1;
int i, j, k;
tempMat = (int **)malloc((size - 1) * sizeof(int *));
for (i = 0; i < size - 1; i++)
 {tempMat[i] = (int *)malloc((size - 1) * sizeof(int));}
for (k = 0; k < size; k++){
 int temp_i = 0, temp_j = 0;
for (i = 1; i < size; i++){
        for (j = 0; j < size; j++){
          if (j != k){
               tempMat[temp_i][temp_j++] = matrix[i][j];}
}
temp_i++;
temp_j = 0;}
det += sign * matrix[0][k] * calculateDeterm(tempMat, size - 1);
sign = -sign;}
for (i = 0; i < size - 1; i++){
    free(tempMat[i]);
}
free(tempMat);
return det;
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

  int n, i, j, deter;

  srand(time(0));
  test_determ();
  printf("Enter n matrix \n");
  scanf("%d", &n);
  int **a = (int*)malloc(n*n * sizeof(int));
  int **matrx1 = random_create(a, n);

  printf("Matrix a\n");
  show_matrx(matrx1, n);
  deter = calculateDeterm(matrx1, n);
  printf("determinant:%d\n", deter);

for (i = 0; i < n; i++){
    free(matrx1[i]);
}free(matrx1);
 return 0;
}
