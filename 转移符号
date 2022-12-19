#pragma warning(disable:4996)
#include<stdio.h>

int fun(int a, int b)
{
	if (a > 0)
	{
		if (b > 0)
			return a;
		if (b <= 0)
			return (-1 * a);
	}
	if (a <= 0)
	{
		if (b > 0)
			return (-1 * a);
		if (b <= 0)
			return a;
	}
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入要转移符号的两个数字(b的符号转给a)：");
	scanf("%d%d", &a, &b);
	int c = fun(a, b);
	printf("fun的值为%d",c);
	return 0;
}
