#include <stdio.h>
#include <stdlib.h>





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
    printf("input str: ");
    scanf("%255s",str);
    printf("output: %s",str);
    int s = len_cstr(str, 255);
    printf("\n len is %d", s);
    return 0;
}
