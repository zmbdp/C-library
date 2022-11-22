#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int ys[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;                            //n是想查找的数字
	int i = 0;
	int m = sizeof(ys) / sizeof(ys[0]);   //计算元素的个数
	printf("请输入需要寻找的数字n(1~10)：");
		scanf("%d", &n);
	for(i=0;i<=m;i++)
	{
		if (n == ys[i])
		{
			printf("找到了，下标是%d\n", i);
			break;
		}
	}
	if (i > m)
		printf("找不到");
	return 0;
}
