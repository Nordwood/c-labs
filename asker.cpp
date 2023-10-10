#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <locale.h>
int main()
{
        setlocale(LC_ALL, "Rus");
	    srand(time(0));
		int b = 1738;
		int a = rand() % 100;
		printf("%d /n", a);
		printf("введите число от 0 до 100 /n");


		while (b != a) {
			scanf("%d", &b);
			if (a != b) {
				if (a > b)
					printf(" Больше ");
				else
					printf(" Меньше ");
			}
			else
				printf("Угадал!!!");
		}


		return 0;

}
