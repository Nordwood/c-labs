#include <stdio.h>
#include <stdlib.h>
int addition(unsigned long int n){
int sum = 0;

while(n != 0){
    sum += n%10;
    n = n/10;


}
printf("%d\n", sum);
return sum;
}

int addchek(unsigned long int n){
    int cnt = 0;
while(n/10 != 0){
    n = addition(n);
    cnt ++;

}
return cnt;
}

int main()
{
    printf("input number for addition check\n");
  unsigned long int n;
  scanf("%d", &n);
  int res = addchek(n);
  printf("%d", res);


    return 0;
}
