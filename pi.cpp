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








void test_calculate_pi(){
if (calculate_pi(1) == 0.00000){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }
if (calculate_pi(4) == 4.0000){
    printf("ok\n");}
    else{
        printf("test failed\n");
            }

}

int main()
{
    test_calculate_pi();
    srand(time(0));
    int n = 100000;
    scanf("%d", &n);
    double lp = calculate_pi(n);
    printf("%f", lp);
    return 0;
}
