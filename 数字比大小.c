#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a = 0;	
	int b = 0;
	int c = 0;
	printf("请输入想比较的三个数:");
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int w=a;
		a = b;
		b = w;
	}
	if (a < c)
	{
		int w = a;
		a = c;
		c = w;
	}
	if (b < c)
	{
		int w = b;
		b = c;
		c = w;
	}
	printf("%d,%d,%d", a, b, c);
	return 0;
}
