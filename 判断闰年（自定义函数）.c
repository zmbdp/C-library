#pragma warning(disable:4996)
#include<stdio.h>
panduanrunnian(int n)
{
	if ((n % 4 == 0 && n % 100 != 0)|| (n % 400 == 0))
	{
		return 1;
	}
	else 
		return 0;
}
int main()
{
	int a = 0;//起始年份
	int b = 0;//终结年份
	int i = 0;//年份
	printf("请输入想判断的年份区域：");
	scanf("%d%d", &a, &b);
	for (i = a;i <= b;i++)
	{
		if (panduanrunnian(i) == 1)
			printf("%d年——是闰年\n", i);
	}
	return 0;
}
