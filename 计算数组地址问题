//一维数组，通过打印所在地址，发现每次加4
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d=%p\n", i, &arr[i]);
	}
	return 0;
}


//下面的是二维数组,通过打印所在地址，发现每次也是加4
int main()
{
	char arr[4][4] = { 1,2,3,4,5,6,7,8,9 } ;
	int i = 0;
	int n = 0;
	for (n = 0;n < 4;n++)
	{
		for (i = 0;i < 4;i++)
		{
			printf("arr[%d][%d]=%p\n", n, i, &arr[n][i]);//打印地址
			//printf("%d ", arr[n][i]);//打印数字
		}
		//printf("\n");
	}
	return 0;
}
