#include <stdio.h>
#include <stdlib.h>

void test_lenstr(){
int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int c[12] = {0, 1, 2, 3, 4, 5, 6, 7, 10, 12, 13,15};

if (len_cst(a, 10)(a, 10) == 10){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
if (len_cst(s, 10)(a, 10) == 12){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
}
int random_array(int *x, int b){
    int s;
    for (int i = 0; i<b; i++){
    s = rand() % 100;
    x[i] = s;
    }
   return x;
}



int len_cstr(char *x, int b){
    int i = 0;
    
    while (x[i] != 0){
        i++;
    }
    return i;
}
int main()
{
    char str[256] = "";
    test_lenstr();
    printf("input str: ");
    scanf("%255s",str);
    printf("output: %s",str);
    int s = len_cstr(str, 255);
    printf("\n len is %d", s);
    return 0;
}
