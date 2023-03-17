int main()
{
	int i = 0;
	int j = 5 - 1;
	int a[5][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
	int c = 0;
	int p = -1;
	for (i = 0;i < 5;i++)
	{
		for (j = 0;j < 5;j++)
		{
			printf("%-2d ", a[i][j]);
		}
		printf("\n");
	}
	printf("请输入需要查找的数字：");
	scanf("%d", &c);
	for (i = 0;i < 5;i++)
	{
		if ((a[i][4] >= c) && (a[i][0] <= c))
		{
			for (j = 0;j < 5;j++)
			{
				if (c == a[i][j])
				{
					printf("存在%d，在第%d行%d列", c, i + 1, j + 1);
					p = 0;
				}
			}
		}
	}
	return 0;
}
