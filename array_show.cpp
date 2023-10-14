#include <stdio.h>
#include <stdlib.h>
// не знаю, что тут тестировать
void show_array(int *x, int b){
    for (int i = 0; i<10; i++){
    printf("%d ", x[i]);}
}
int main()
{
    int a[10];
    for(int i = 0; i<10; i++){
        a[i] = i;
        }

    show_array(a, 10);
    return 0;
}
