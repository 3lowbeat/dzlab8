#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int a, n;
	printf("Введите последовательно числа через запятую\n");
	scanf("%d,%d", &a, &n);
	int i;
	int res = 1;
	for (i = a+1; i <= n+1; i=i+1) 
	{
		res*= a * i;
		printf("%d\n", res);
	}
	printf("Итоговое значение вычислений = %d", res);
}