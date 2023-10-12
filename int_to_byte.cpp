#include <stdio.h>
#include <stdlib.h>

void byte(int n){
    int c;
    int k;
    int s = n;

    while (s>0){

    c = s&1;

    printf("%d", c);
    s = s/2;

    }
}
int main()
{
    test_byte();
    int b;
    scanf("%d", &b);
    byte(b);
    return 0;
}
