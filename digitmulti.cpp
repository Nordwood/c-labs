#include <stdio.h>
#include <stdlib.h>
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
    printf("input number for multidigit\n");
  int n;
  scanf("%d", &n);
  int res = multi(n);
  printf("%d", res);


    return 0;
}
