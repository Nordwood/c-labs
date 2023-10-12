#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
int multi(long int n){
int sum = 1;

while(n != 0){
    sum *= n%10;
    n = n/10;
}
return sum;
}

int addchek(long int n){
    int cnt = 0;
while(n/10 != 0){
    n = multi(n);
    cnt ++;

}
return cnt;
}

int main()
{
    printf("input number for multidigitcheck\n");
  long int n;
  scanf("%d", &n);
  int res = addchek(n);
  printf("%d", res);


    return 0;
}
