#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// не знаю, что тут тестировать
int random_array(int *x, int b){
    int s;
    for (int i = 0; i<b; i++){
    s = rand() % 100;
    x[i] = s;
    }
   return x;
}

void show_array(int *x, int b){
    for (int i = 0; i<10; i++){
    printf("%d ", x[i]);}
}

int max_array(int *x, int b){
int i;
  int max, index;
  max = x[0];
  for (i = 1; i<b; i++)
  {
    if (x[i]>max)
    {
      max = x[i];
    }
  }
  return max;
}

int main()
{
    srand(time(0));
    int a[10];
    int arr = random_array(a, 10);
    show_array(arr, 10);
    int mxx = max_array(arr, 10);
    printf("\nmax = %d", mxx);

    return 0;
}
