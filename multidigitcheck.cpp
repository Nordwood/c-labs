#include <stdio.h>
#include <stdlib.h>

void test_multchek(){
if (multchek(0) == 0){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
if (multchek(5) == 0){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }

if (multchek(5678) == 2){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
}
int multi(long int n){
int sum = 1;

while(n != 0){
    sum *= n%10;
    n = n/10;
}
return sum;
}

int multchek(long int n){
    int cnt = 0;
while(n/10 != 0){
    n = multi(n);
    cnt ++;

}
return cnt;
}

int main()
{
    test_multchek();
    printf("input number for multidigitcheck\n");
  long int n;
  scanf("%d", &n);
  int res = multchek(n);
  printf("%d", res);


    return 0;
}
