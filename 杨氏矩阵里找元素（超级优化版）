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
	j = 5 - 1;
	i = 0;
	while (i < 5 && j >= 0)
	{
		if (a[i][j] < c)
		{
			i++;
		}
		else if (a[i][j] > c)
		{
			j--;
		}
		else
		{
			p = 0;
			printf("存在%d，在第%d行%d列", c, i+1, j+1);
			break;
		}
	}
	if (p == -1)
	{
		printf("%d不存在\n", c);
	}
	return 0;
}
