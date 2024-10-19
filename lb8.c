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
	int k, k1;
	char c, c1;

	//ввод данных с клавиатуры 
	puts("Введите количество символов и их вид");
	scanf_s("%d%c", &k, &c);
	c = getchar();
	puts("Введите другой вид символов");
	scanf_s("%c", &c1);
	c1 = getchar();
	k1 = k / 2;
	for (int start = 1; start <= k; start++) putchar(c);  printf("\n");
	for (int start = 1; start <= k; start++) putchar(c); putchar('+'); printf("\n");
	for (int start = 1; start <= k1; start++) putchar(c);
	for (int start = k1 + 1; start <= k; start++) putchar(c1); printf("\n");
	for (int start = 1; start <= k; start++) { putchar(c); putchar('!'); } printf("\n");

	//задание 1 
	int n, m, s;
	puts("Введите n и m (m больше n)");
	scanf_s("%d%d", &n, &m);
	s = 0;
	for (int i = m; i >= n; i--)
	{
		s += i;
		printf("Выполнено %d раз\n", k++);
	}
	printf("Результат %d\n", s);

	//задание 1А 
	int n1;
	puts("Введите степень");
	scanf_s("%d", &n1);
	for (int i = 1; i <= n1; i++)
	{
		printf("%2.1f\n", pow(2, i));
	}

	//задание 2 
	double q;
	int st = 2;
	int fin = 2;
	puts("y = x^3 + 3*x^2 - 3");
	puts("Введите шаг");
	scanf_s("%lf", &q);
	printf(" ______________\n");
	for (int i = st; i <= fin; i+=q) 
	{
		double y = pow(i, 3) + 3 * pow(i, 2) - 3;
		printf("| %2.2f | %2.2lf |\n", i, y);
	}

	//задание 3
	int x4;
	double n22;
	puts("Введите значение x и n");
	scanf_s("%d%lf", &x4, &n22);
	float s22 = sin(x4);
	for (double i = 1; i <= n22; i++)
	{
		s22 = s22 + sin(s22);
		printf("%2.2lf\n", s22);
	}

	



}