#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>


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
void free_matrx(int **a, int n){
  int i, j;
  for (i = 0; i<n; i++)
  {
    for (j = 0; j<n; j++)
    {
      free(a[i][j]);
    }

  }
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
  printf("Enter n matrix ");
  scanf("%d", &n);
  int **a = (int*)malloc(n*n * sizeof(int));
  int **matrx = random_create(a, n);
  show_matrx(matrx, n);
  free_matrx(matrx, n);
  return 0;
}
