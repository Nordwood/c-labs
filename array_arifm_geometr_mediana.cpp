#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
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

double arifmetic_sr_array(int *x, int b){
    int i;
  double sum = 0;
  double arf_sr = 0;

  for (i = 0; i<b; i++)
  {
    sum += x[i];
    }
  arf_sr = sum / b;
  return arf_sr;
}

double geometric_sr_array(int *x, int b){
    int i;
  double sum = 0;
  double geo_sr = 0;
    double k = 1./b;
  for (i = 0; i<b; i++)
  {
    sum += x[i];
    }
  geo_sr = pow(sum, k);
  return geo_sr;
}

int bubbleSort(int *x, int b)
{

  for (int i = 0; i < b - 1; i++)
  {
    for (int j = (x - 1); j > i; j--)
    {
      if (x[j - 1] > x[j])
      {
        int temp = x[j - 1];
        x[j - 1] = x[j];
        x[j] = temp;
      }
    }
  }
  return x;
}

double median(int *x, int b){
    int i;
    int index;
    float med;
  if(b%2 == 1){
    index = b/2 + 1;
    return x[index];
  }
  else{
    int l1 = b/2;
    int l2 = b/2 +1;
    med = (x[l1] + x[l2])/2;
  }

  return med;}

int main()
{
    srand(time(0));
    int a[10];
    int arr = random_array(a, 10);
    show_array(arr, 10);


    double arfm = arifmetic_sr_array(arr, 10);
    printf("\nsrednnee arifm = %f", arfm);


    double geo = geometric_sr_array(arr, 10);
    printf("\nsrednnee geometr = %f", geo);

    int medarr = bubbleSort(arr, 10);
    show_array(medarr, 10);

    double mediana = median(medarr, 10);
    printf("\nmediana = %f", mediana);

    return 0;
}
