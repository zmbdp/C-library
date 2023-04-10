int tiao(int n)
{
	if (n == 1 || n == 2)
		return n;
	else
	{
		return tiao(n - 1) + tiao(n - 2);
	}
}
int main()
{
	int n = 0;//需要跳的台阶
	printf("请问需要跳几个台阶：");
	scanf("%d", & n);
	int z = tiao(n);//z是有几种跳法
	printf("有%d种跳法", z);
	return 0;
}
