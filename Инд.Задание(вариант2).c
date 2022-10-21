#include<stdio.h>
#include<locale.h>

void main()
{
	int x, a;
	setlocale(LC_ALL, "RUS");
	puts("Введите сколько молоко стоило изначально");
	scanf("%d",&x);
	puts("Введите на сколько молоко подорожало ");
	scanf("%d",&a);
	printf("Учитывая то, что в апреле 30 дней, продовцу нужно будет заплатить столько %d рублей", 4*(x+a)*30);

}
