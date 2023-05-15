int main()
{
	int i = 0;//一行的计数
	int m = 0;//
	printf("请问打印边长为几的菱形？");
	scanf("%d", &m);
	int j = 0;

	//先把上半部分打印出来
	for (i = 0; i <= m; i++)//控制打印几行
	{
		//打印左边的空格
		for (j = 0; j < (m - i); j++)
		{
			printf(" ");
		}
		//打印中间的*
		for (j = 0; j < (2 * i - 1); j++)
		{
			printf("*");
		}
		//打印完一行之后换行
		printf("\n");
	}

	//再打印下半部分
	for (i = 1; i <= m - 1; i++)//控制打印几行
	{
		//打印下半部分的一行
		//老样子，先打印空格
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		//再打印*号
		for (j = 0; j < (2 * (m - 1 - i) + 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
