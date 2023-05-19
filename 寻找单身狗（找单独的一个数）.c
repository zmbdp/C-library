#pragma warning(disable:4996)
#include<Stddef.h>
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,1,4,6,3,4,7,4,6,2,5,6,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz;i++)
//	{
//		int n = 0;
//		for (j = 0;j < sz;j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				n++;
//			}
//		}
//		if (n == 1)
//		{
//			printf("%d是单身狗\n", arr[i]);
//		}
//	}
//	return 0;
//}
//优化后
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,1,2,3,4,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int ret = 0;
	for (i = 0;i < sz;i++)
	{
		ret = ret ^ arr[i];
	}
	printf("%d是单身狗\n", ret);
	return 0;
}
