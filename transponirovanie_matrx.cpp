#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

void test_trans(){
int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int s[3][3] = { 1, 4, 7, 2, 5, 8, 3, 6, 9 };
if (transpon(a, 10) == s){
    printf("ok\n");}
    else{
        printf("test failed\n");
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

int transpon(int **a , int n){
int t;
 for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++) {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
return a;
}

int main()
{

 int i, j, n;

  srand(time(0));
  test_trans();
  printf("Enter n matrix ");
  scanf("%d", &n);
  int **a = (int*)malloc(n*n * sizeof(int));
  int **matrx = random_create(a, n);
  show_matrx(matrx, n);
  int **s = transpon(matrx, n);
  printf("\n");
  show_matrx(s, n);

 for (i = 0; i < n; i++){
    free(matrx[i]);
 }free(matrx);
for (i = 0; i < n; i++){
    free(s[i]);
}free(s);
  
  return 0;
}
