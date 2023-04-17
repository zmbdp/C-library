#include"shuang.h"

void test()
{
	//初始化函数
	LB* plist = ListInit();

	//尾插
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	//打印函数
	ListPrintf(plist);

	//尾删
	ListPopBack(plist);
	ListPopBack(plist);
	//打印函数
	ListPrintf(plist);

	//头插
	ListPushFront(plist, 12);
	ListPushFront(plist, 13);
	ListPushFront(plist, 14);
	ListPushFront(plist, 15);
	//打印函数
	ListPrintf(plist);

	//头删
	ListPopFront(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	//打印函数
	ListPrintf(plist);

	//查找函数
	LB* dizhi = ListFind(plist, 2);
	printf("%p\n", dizhi);

	//随便插函数(1)
	//suibiancha(plist, 2, 14);//2：在2之前插入，14：插入14
	//随便插函数(2)
	suibiancha(dizhi,14);//把需要插入的地址传过去，在它前一个插入
	//打印函数
	ListPrintf(plist);

}


int main()
{
	test();
	return 0;
}