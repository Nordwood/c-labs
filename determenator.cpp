#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
// не работает я устал исправлять и искать ошибки
int determ_matrx(int **a ,int n){
int **mn = random_create(a, n);
int **r = random_create(a, n);
int d;
if (n == 1){
    d = a[0][0];}
else if (n == 2){
    d = a[0][0]*a[1][1] - a[1][0]*a[0][1];
}
else {
    int s;
    for (int i = 0; i<n; i++){
       mn[i] = (int*) malloc((i + 1) * sizeof(int));
        for (int j = 0; j<n; j++){
           r[j] = (int*) malloc((j + 1) * sizeof(int));
                for (int k = 0; k<n; k++){
                    if((j != 0) && (k != i)){
                       r += a[j][k];
                       }
                }mn += r;
        }s += a[0][i]*determ_matrx(mn, n - 1 )*(-1)**1;
    }
   d = s;
}
return d;
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

  printf("Matrix a\n");
  show_matrx(matrx1, n);

  int **s = determ_matrx(a, n)
  printf("determinant:\n");
  show_matrx(s, n);
  free(matrx1);
  free(s);


  return 0;
}
