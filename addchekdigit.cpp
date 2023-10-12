#include <stdio.h>
#include <stdlib.h>
void test_addchek(){
if (addchek(0) == 0){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
if (addchek(5) == 0){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }

if (addchek(5678) == 2){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
}
int addition(unsigned long int n){
int sum = 0;

while(n != 0){
    sum += n%10;
    n = n/10;


}

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
test_addchek();
    printf("input number for addition check\n");
  unsigned long int n;
  scanf("%d", &n);
  int res = addchek(n);
  printf("%d", res);


    return 0;
}
