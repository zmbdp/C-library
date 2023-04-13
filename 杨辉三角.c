int main()
{
	int arr[10][10] = { 0 };
	int i = 0;//记行数
	int j = 0;//列数
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			//先把1全部打印出来
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i > 1 && j > 0)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	int z = 0;
	for (i = 0; i < 10; i++)
	{
		for (z = 0; z < (10 - i); z++)
		{
			printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if (arr[i][j] != 0)
			{
				printf("%d ", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
