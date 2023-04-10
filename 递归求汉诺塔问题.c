yidong(int x, int y)
{
	printf("%c->%c\n", x, y);
}
han(int n, char a, char b, char c)
{
	if (n == 1)
	{
		yidong(a, c);
	}
	else
	{
		han(n - 1, a, c, b);
		yidong(a, c);
		han(n - 1, b, a, c);
	}
}
int main()
{
	int n = 0;//n-盘子数量
	printf("请问有几个盘子？");
	scanf("%d", &n);
	han(n, 'a', 'b', 'c');
	return 0;
}
