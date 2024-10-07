#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	for (int start = 1; start <= 10; start++) putchar('*');

	//задание 1
	int n, m,s,k;
	puts("Введите значение n");
	scanf_s("%d", n);
	puts("Введите значение m");
	scanf_s("%d", m);
	for (int i = m; i >= n; i--)
	{
		s += i;
		printf("Выполнено %d раз", k++);
	}
	printf("Результат %d", s);
	return 0;
}