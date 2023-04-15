#pragma warning(disable:4996)
#include<stdio.h>
int z(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int m = 0;
	int n = 0;
	printf("请输入想比较的两个数：");
	scanf("%d%d", &m, &n);
	int max = z(m, n);
	printf("max=%d\n", max);
	return 0;
}
//加减乘除和比大小都大同小异，但是下面的交换数值，有点不一样了
//jiaohuan(int* pm, int* pn)
//{
//	int z = *pm;
//	*pm = *pn;
//	*pn = z;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("请输入你想交换的两个数字：");
//	scanf("%d%d", &m, &n);
//	printf("m=%d n=%d—（初始）\n", m, n);
//	jiaohuan(&m, &n);
//	printf("m=%d n=%d—（交换后）", m, n);
//	return 0;
//}
