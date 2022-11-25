#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int m = 0;                                                  //开始年份
	int n = 0;                                                  //结束年份
	int c = 0;
	printf("请输入需要判断的年份(从第几年到第几年):");
	scanf("%d%d", &m, &n);
	int i = m;
	while (m <= i <= n)
	{
		if (i % 4 == 0 && i % 100 != 0)
		{
			printf("%d年——是闰年\n", i);
			c++;
		}
		else if (i % 400 == 0)
		{
			printf("%d年——是闰年\n", i);
			c++;
		}
		i++;
		if (i > n)
			break;
	}
	printf("一共有%d个闰年", c);
	return 0;
}
