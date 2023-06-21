#pragma warning(disable:4996)
#include<stdio.h>
int main()
{	int m = 0;                                      //m是初始值
	int n = 0;                                      //n是终结值
	int z = 0;                                      //z是统计有几个素数
	printf("请输入需要求素数的区域：");
	scanf("%d%d", &m, &n);
	int i = m;                                      //i从m开始
	while (m <= i && i <= n)
	{
		int r = 2;
		while (r < i)
		{
			if (i % r == 0)
			{
				break;
			}
			r++;
		}
			if (r == i)
			{
				printf("%d——是素数\n", r);
				z++;
			}
			if (i > n)
			{
				break;
			}
			i++;
	}
	printf("\n一共有%d个素数", z);
	return 0;
}
