#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "UTF-8");
	int vday;
	int marchd;
	int aprild;
	int x;
	int a;
	vday = 4;
	marchd = 31;
	aprild = 30;
	puts("Цена за литр в марте: ");
	scanf("%d", &x);
	printf("Сумма за молоко в марте - %d руб \n", x * marchd);
	puts("Сумма на которую увеличилась цена в апреле:");
	scanf("%d", &a);
	printf("Цена за молоко в апреле: %d руб\n", x + a);
	printf("Сумма за молоко в апреле - %d руб\n", (x+a) * aprild);
	printf("Общая сумма за молоко за март и апрель: %d руб", (x * marchd) + ((x + a) * aprild));

}