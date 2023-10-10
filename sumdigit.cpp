#include <stdio.h>
#include <stdlib.h>
int addition(int n){
int sum = 0;

while(n != 0){
    sum += n%10;
    n = n/10;
}
return sum;
}



int main()
{
    printf("input number for add\n");
  int n;
  scanf("%d", &n);
  int res = addition(n);
  printf("%d", res);


    return 0;
}
