int main()
{
	int i = 0;//行
	int j = 0;//列
	int arr[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int c = 0;
	int p = -1;
	for (i = 0;i < 5;i++)
	{
		for (j = 0;j < 5;j++)
		{
			printf("%-2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("请输入你要查找的数：");
	scanf("%d", &c);
	if (c > (arr[2][2]))
	{
		for (i = 2;i < 5;i++)
		{
			for (j = 2;j < 5;j++)
			{
				if (c == arr[i][j])
				{
					printf("%d存在，在第%d行%d列\n", c, i + 1, j + 1);
					p = 0;
				}
			}
		}
	}
	else
	{
		for (i = 0;i <= 2;i++)
		{
			for (j = 0;j < 5;j++)
			{
				if (c == arr[i][j])
				{
					printf("%d存在，在第%d行%d列\n", c, i + 1, j + 1);
					p = 0;
				}
			}
		}
	}
	if (p == -1)
	{
		printf("%d不存在\n", c);
	}
	return 0;
}
