#include <stdio.h>
#include <stdlib.h>
void test_addition(){
if (addition(1) == 1){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
if (addition(123) == 6){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }

if (addition(999) == 27){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
}
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
    test_addition();
    printf("input number for add\n");
  int n;
  scanf("%d", &n);
  int res = addition(n);
  printf("%d", res);


    return 0;
}
