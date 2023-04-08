int Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	if (n > 1)
	{
		return n * Fac(n - 1);
	}
}
int main()
{
	int n = 0;
	printf("请输入所要求的阶层n：");
	scanf("%d", &n);
	int z = Fac(n);
	printf("%d",z);
	return 0;
}
