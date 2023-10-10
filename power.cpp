#include <stdio.h>
#include <stdlib.h>
int power(int a, int b){
int i = 1;
int s = a;
for(i; i <= b; i++){
        s *= a;
    }
    return s;
}
int main()
{
    printf("input 2 int numbers\n");
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int res = power(a,b);
    printf("%d", res);

    return 0;
}
