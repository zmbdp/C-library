#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>//qsort头文件
#include<string.h>
int bijiaofangfa(const void* q1, const void* q2);
void mofang_qsort(void* dizhi, int sz, int kuandu, int (*bijiao)(const void* el1, const void* el2));
//struct bq
//{
//	char* name;
//	int age;
//};
//
////////比名字
//////int bi_name(const void* el1, const void* el2)
//////{
//////	return strcmp((((struct bq*)el1)->name), (((struct bq*)el2)->name));
//////}
////
////比年龄
//int bi_age(const void* el1, const void* el2)
//{
//	return ((struct bq*)el1)->age - ((struct bq*)el2)->age;
//}
//
//int main()
//{
//	struct bq B[] = { {"张三",29}, {"李四",26},{"王五",17},{"王六",28 } };
//	struct bq* q = &B;
//	int sz = sizeof(B) / sizeof(B[0]);
//
//	////按照名字排序
//	//qsort(B, sz, sizeof(B[0]), bi_name);
//	//for (int i = 0;i < sz;i++)
//	//{
//	//	printf("名字排序结果为：%s %d\n", (*q).name, (*q).age);
//	//	q++;
//	//}
//
//	//按照年龄排序
//	qsort(B, sz, sizeof(B[0]), bi_age);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("年龄排序结果为：%s %d\n", (*q).name, (*q).age);
//		q++;
//	}
//	return 0;
//}



////模仿qsort实现排序的通用算法
//
//////比较两个字母
////int bijiaofangfa(const void* q1, const void* q2)
////{
////	return strcmp(q1, q2);
////}
//
////比较两个数
//int bijiaofangfa(const void* q1, const void* q2)
//{
//	return *(int*)q1 - *(int*)q2;
//}
//
////交换两个数
//void jiaohuan(char* e1, char* e2,int kd)
//{
//	int i = 0;
//	for (i = 0;i < kd;i++)
//	{
//		char tmp = (*e1);
//		(*e1) = (*e2);
//		(*e2) = tmp;
//		e1++;
//		e2++;
//	}
//}
//
////仿照qsort函数主体部分
//void mofang_qsort(void*dizhi,int sz,int kuandu,int (*bijiao)(const void*el1,const void*el2))
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		//交换几次
//		int j = 0;
//		for (j = 0;j < sz - i - 1;j++)
//		{
//			//两个元素比较
//			if (bijiao((char*)dizhi + (kuandu * j), (char*)dizhi + (kuandu * (j + 1))) > 0)//用来比较的
//			{
//				//进行交换
//				jiaohuan((char*)dizhi + (kuandu * j), (char*)dizhi + (kuandu * (j + 1)),kuandu);//用来交换的
//			}
//		}
//	}
//}
//
////打印部分
//void print(int arr[], int sz)
//{
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void shuzi()
//{
//	int arr[] = { 1,4,2,7,19,25,91,63,55,81,1,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	mofang_qsort(arr, sz, sizeof(arr[0]), bijiaofangfa);//一定记住这是传用来比较的那个函数过去
//	print(arr, sz);
//}
//
//void zimu()
//{
//	char arr[] = { 'q','e','s','g','j','q','o','w','x','g' };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	mofang_qsort(arr, sz, sizeof(arr[0]), bijiaofangfa);//一定记住这是传用来比较的那个函数过去
//	print(arr, sz);
//}
//int main()
//{
//	shuzi();
//	return 0;
//}


