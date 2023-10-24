#include <stdio.h>
#include <stdlib.h>
// не работает???

void test_len_str(){
if (len_cstr() == ){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
if (len_cstr == ){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }

if (len_cstr == ){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }


int len_cstr(char *x, int b){
    int i = 0;
    
    while (x[i] != " "){
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
    int s = len_char(str, 255);
    printf("%d", s);
    return 0;
}
