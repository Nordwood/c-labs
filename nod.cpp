#include <stdio.h>
#include <stdlib.h>
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
    printf("input 2 numbers for nod\n");
  int n;
  int m;
  scanf("%d", &n);
  scanf("%d", &m);
  int res = nod(n,m);
  printf("%d", res );

    return 0;
}
