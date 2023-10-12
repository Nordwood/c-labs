#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n){
if(n == 1 || n == 2){
    return 1;
}
return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
printf("input int number for fibonaci\n");
  int n;
  scanf("%d", &n);
  int res = fibonacci(n);
  printf("%d", res);
    return 0;
}
