#include <stdio.h>
#include <stdlib.h>
void test_nod(){
if (nod(12, 18) == 6){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
if (nod(22,11) == 11){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }

if (nod(2,5) == 1){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
}
int nod(int m,int n){
while (m != n){
    if (m > n) {
        m = m - n;
    }
    else{
        n = n - m;
    }
    return n;
}
}
int main()
{
    test_nod();
    printf("input 2 numbers for nod\n");
  int n;
  int m;
  scanf("%d", &n);
  scanf("%d", &m);
  int res = nod(n,m);
  printf("%d", res );

    return 0;
}
