#include <stdio.h>
#include <stdlib.h>
void test_power(){
if (power(1, 1) == 1){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
if (power(2,3) == 8){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }

if (power(10,3) == 1000){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
}
int power(int a, int b){
int i = 1;
int s = 1;
for(i; i <= b; i++){
        s *= a;
    }
    return s;
}
int main()
{
        test_power();
    printf("input 2 int numbers for sqr\n");
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int res = power(a,b);
    printf("%d", res);

    return 0;
}
