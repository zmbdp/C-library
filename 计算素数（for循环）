#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int r = 0;                           //r是素数
	int z = 0;                           //z是统计多少个素数
	int n = 0;                           //n是初始值
	int m = 0;                           //m是终结值
	int i = 0;
	printf("请输入需要求素数的区间：");
	scanf("%d%d",&n,&m);
	for (i = n;n <= i <= m;i++)
	{
		for (r = 2;r < i;r++)
		{
			if (i % r == 0)
			{
				break;
			}
		}
		if (r == i)
		{
			z++;
			printf("%-2d ", i);
			if (z%10 == 0)
			{
				printf("\n");
			}
		}
		if (i > m)
			break;
	}
	printf("\n有%d个素数", z);
	return 0;
}
