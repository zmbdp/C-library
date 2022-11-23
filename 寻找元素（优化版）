#pragma warning(disable:4996)
#include<stdio.h>
int main()
{ 
	int ys[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;                                    //想查找的元素
	int z = sizeof(ys) / sizeof(ys[0]);           //z是元素个数
	int zuo = 0;                                  //左下标
	int you = z - 1;                              //右下标
	printf("请输入需要查找的元素n(1~10)：");
	scanf("%d", &n);
	while (zuo <= you)
	{
		int zhong = (zuo + you) / 2;
		if (ys[zhong] > n)
		{
			you = zhong - 1;
		}
		else if (ys[zhong] < n)
		{
			zuo = zhong + 1;
		}
		else
		{
			printf("找到了，下标是:%d\n", zhong);
			break;
		}
	}
	if (zuo > you)
	{
		printf("找不到\n");
	}
	return 0;
}
