#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

void test_multi(){
int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int s[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 11 };
int **a = (int*)malloc(n*n * sizeof(int));
int **s = multiply_matrx(matrx1, matrx2, a, n)
k[3][3] = {30, 36, 48, 66, 81, 108, 102, 126, 168};   
if (s == k){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
}

int multiply_matrx(int **a , int **b, int **c, int n){


for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++)
    {

        c[i] = (int*) malloc((i + 1) * sizeof(int));
        for(int k = 0; k < n; k++){
        c[i][j] += a[i][k] * b[k][j];}}
    }
return c;
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
  int **s = multiply_matrx(matrx1, matrx2, a, n);
  printf("multiply:\n");
  show_matrx(s, n);
  free(matrx1);
  free(matrx2);
  free(s);


  return 0;
}
