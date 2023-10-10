#include<stdio.h>
#include<stdlib.h>
#include <time.h>

// возвращает случайное число от -1 до 1
double random(){
    int a = rand()%2001;
    double x = a / 1000. - 1.;
    return x;
}

// возврашает факт того: попала ли точка внутрь круга?
bool is_in_circle(double x, double y){
    
    double r = x*x + y*y;

    if (r <= 1) {
        return true;
    }
    return false;
}




/*
* n - monte carlo iteratons
*/
double calculate_pi(int n){
    int acc = 0;
    
    for(int i = 1; i <= n; i++){
        double x = random();
        double y = random();
        if(is_in_circle(x, y)){
            acc++;
        }
    }
    return (4.0 * acc) / n;
}










int main()
{
    srand(time(0));
    int n = 100000;
    scanf("%d", &a);
    double lp = calculate_pi(n);
    printf("%f", lp);
    return 0;
}
