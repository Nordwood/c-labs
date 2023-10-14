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

int main()
{
    srand(time(0));
    int a[10];
    random_array(a, 10);
    show_array(a, 10);

    return 0;
}
