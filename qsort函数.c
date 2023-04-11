#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>//qsort头文件
#include<string.h>
struct bq
{
	char* name;
	int age;
};

//////比名字
////int bi_name(const void* el1, const void* el2)
////{
////	return strcmp((((struct bq*)el1)->name), (((struct bq*)el2)->name));
////}
//
//比年龄
int bi_age(const void* el1, const void* el2)
{
	return ((struct bq*)el1)->age - ((struct bq*)el2)->age;
}

int main()
{
	struct bq B[] = { {"张三",29}, {"李四",26},{"王五",17},{"王六",28 } };
	struct bq* q = &B;
	int sz = sizeof(B) / sizeof(B[0]);

	////按照名字排序
	//qsort(B, sz, sizeof(B[0]), bi_name);
	//for (int i = 0;i < sz;i++)
	//{
	//	printf("名字排序结果为：%s %d\n", (*q).name, (*q).age);
	//	q++;
	//}

	//按照年龄排序
	qsort(B, sz, sizeof(B[0]), bi_age);
	for (int i = 0;i < sz;i++)
	{
		printf("年龄排序结果为：%s %d\n", (*q).name, (*q).age);
		q++;
	}
	return 0;
}
