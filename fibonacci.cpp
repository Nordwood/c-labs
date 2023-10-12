#include <stdio.h>
#include <stdlib.h>
void test_fibonacci(){
if (fibonacci(1) == 1){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
if (fibonacci(7) == 13){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }

if (fibonacci(5) == 5){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
}
int fibonacci(int n){
if(n == 1 || n == 2){
    return 1;
}
return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
test_fibonacci();
printf("input int number for fibonaci\n");
  int n;
  scanf("%d", &n);
  int res = fibonacci(n);
  printf("%d", res);
    return 0;
}
