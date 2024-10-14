//директивы
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
float main()
{
	setlocale(LC_ALL, "RUS");
	//задание 0
	for (int start = 1; start <= 10; start++) putchar('*');
	//объявление переменных
	int k;
	char c,c1;

	//ввод данных с клавиатуры
	puts("Введите количество символов и их вид");
	scanf_s("%d%c", &k, &c);
	c = getchar();
	for (int start = 1; start <= k; start++) putchar(c);
	for (int start = 1; start <= k; start++) putchar(c); putchar('+');
	for (int start = 1; start <= k; start++) putchar(c+'!'); 

	
	
}
