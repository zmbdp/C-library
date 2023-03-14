void caidan()
{
	printf("****************************************\n");
	printf("******    1.jiafa     2.jianfa    ******\n");
	printf("******   3.chengfa     4.chufa    ******\n");
	printf("******           0.exte           ******\n");
	printf("****************************************\n");
}

int jia(int x, int y)
{
	return x + y;
}
int jian(int x, int y)
{
	return x - y;
}
int cheng(int x, int y)
{
	return x * y;
}
int chu(int x, int y)
{
	return x / y;
}

int quan(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入需要计算的两个数：");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}
int main()
{
	caidan();
	int s = 0;
	printf("请输入你选择的计算方式：");
	scanf("%d", &s);
	switch (s)
	{
	case 0:
		printf("退出成功");
		break;
	case 1:
		printf("结果是：%d\n", quan(jia));
		main();//用递归主要是算完之后不用重新启动程序，还能接着算。
		break;
	case 2:
		printf("结果是：%d\n", quan(jian));
		main();
		break;
	case 3:
		printf("结果是：%d\n", quan(cheng));
		main();
		break;
	case 4:
		printf("结果是：%d\n", quan(chu));
		main();
		break;
	default:
		printf("输入错误，请重新输入：\n");
		main();
	}
	return 0;
}
