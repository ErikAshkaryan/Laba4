#include<stdio.h>
#include<locale.h>

void main()
{
	char c = '!', c1;
	int i = 2, i1;
	float f = 3.14f, f1;
	double d = 5e-12, d1;
	setlocale(LC_ALL, "RUS");
	printf("%c, \n%d, \n%.2f, \n%.e\n", c, i, f, d);
	puts("Введите значения \n ");
	scanf("%c%d%f%le", &c1, &i1, &f1, &d1);
	printf("Второй набор: \n%c\n%d\n%.2f\n%.le\n\n", c1, i1, f1, d1);
	puts("Задача 1а");
	printf("Целая часть %d\n Дробная часть %f\n\n", (char)f1, f1 - (char)f1);
	puts("Задача 1б");
	printf("Шестнадцатеричный код символа : %x\n Десятиный код : %i\n\n", (int)c1, (int)c1);
	puts("Задача 1в");
	printf("Десятичное число 1/i = %.3f\n\n", (float)1 / i1);

	puts("Задание 2\n");
	int a = 11, b = 3, x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("%d, %f, %lf\n\n", x, y, z);

	puts("Задание 2б");
	printf("float %f\n ", (float)a / b);
	printf("double %lf\n\n", (double)a / b);

	puts("Задание 3");
	int n, r1, r2, r3;
	puts("Введите 3-х значное число\n");
	scanf("%d",&n);
	r3 = n % 10;
        r1 = n / 100;
	r2= n / 10 % 10;
	printf("Последняя цифра %i, первая  %i, сумма цифра %i\n", abs (r3), abs(r1), abs(r1 + r2 + r3));
	printf("Первая цифра %d / на вторую %d = %.2f", r1, r2, (float)r1 / r2);
}
