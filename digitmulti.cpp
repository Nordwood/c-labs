#include <stdio.h>
#include <stdlib.h>

void test_multi(){
if (multi(1) == 1){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
if (multi(5) == 5){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }

if (multi(123) == 6){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
}
int multi(int n){
int sum = 1;
while(n != 0){
    sum *= n%10;
    n = n/10;
}
return sum;
}



int main()
{
    test_multi();
    printf("input number for multidigit\n");
  int n;
  scanf("%d", &n);
  int res = multi(n);
  printf("%d", res);


    return 0;
}
