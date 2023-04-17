#include"dan.h"

//尾插
void test1()
{
	SLTDateType* plist = NULL;
	int x = 0;//shuzi
	int i = 0;
	int q = 0;//cishi
	printf("请问你想输入几个数字？->");
	scanf("%d", &q);
	printf("插入的数字->");
	for(i-0;i<q;i++)
	{
		scanf("%d", &x);
		SListPushBack(&plist, x);
	}
	SListPrint(plist);
}


//乱插
void test2()
{
	SLTDateType* plist = NULL;
	int y = 0;//shuzi
	int i = 0;
	int q = 0;//cishi
	printf("\n请问你想输入几个数字？->");
	scanf("%d", &q);
	printf("\n插入的数字->");
	for (i = 0;i < q;i++)
	{
		scanf("%d", &y);
		SListPushBack(&plist, y);
	}
	SListPrint(plist);

	int x = 0;//下标
	int s = 0;//数字
	printf("\n请问想插入第几个？->");
qu:
	scanf("%d", &x);
	if (x > 0 && x <= q+1)
	{
		printf("\n请输入数字->");
		scanf("%d", &s);
		SListInsert(&plist, (x - 1), s);//x:下标，s：数字
		SListPrint(plist);
	}
	else
	{
		printf("输入错误，请重新输入->");
		goto qu;//输入错误，重新输入
	}

	//销毁函数
	SListDestory(&plist);
}


//乱删
void test3()
{
	SLTDateType* plist = NULL;
	int y = 0;//shuzi
	int i = 0;
	int q = 0;//cishi
	printf("\n请问你想输入几个数字？->");//q:一共几个数字
	scanf("%d", &q);
	printf("\n插入的数字->");
	for (i = 0;i < q;i++)
	{
		scanf("%d", &y);
		SListPushBack(&plist, y);
	}
	SListPrint(plist);
	int pow = 0;
	printf("\n请问你想删除第几个？");
qu:
	scanf("%d", &pow);//pow：删除第几个
	if (pow <= q && pow >= 1)
	{
		SListErase(&plist, (pow - 1));
		SListPrint(plist);
	}
	else
	{
		printf("输入错误，请重新输入->");
		goto qu;
	}

	//销毁函数
	SListDestory(&plist);
}


//查找函数
void test4()
{
	SLTDateType* plist = NULL;
	int y = 0;//shuzi
	int i = 0;
	int q = 0;//cishi
	printf("\n请问你想输入几个数字？->");
	scanf("%d", &q);
	printf("\n插入的数字->");
	for (i = 0;i < q;i++)
	{
		scanf("%d", &y);
		SListPushBack(&plist, y);
	}
	SListPrint(plist);

	//查找函数本体
	int x = 0;
	i = 1;
	printf("\n请问需要查找什么数字？->");
	scanf("%d", &x);
	//返回地址，更好操作这些
	SLT* newplist = chazhao_and_xiugai(plist, x);
	while(newplist != NULL)
	{
		printf("\n第%d个%d的地址：%p", i++, (newplist->data), newplist);
		newplist = chazhao_and_xiugai((newplist->next), x);
	}


	//修改数据
	printf("\n请问需要修改数字么？(修改请按1)->");
	scanf("%d", &q);
	if(q==1)
	{
		printf("\n请问你需要修改什么数字？->");
		scanf("%d", &x);
		printf("\n请问你需要修改成多少？->");
		scanf("%d", &y);
		newplist = chazhao_and_xiugai(plist, x);
		while (newplist != NULL)
		{
			(newplist->data) = y;
			newplist = chazhao_and_xiugai((newplist->next), x);
			q = -1;
		}
		if (q != -1 && newplist == NULL)
		{
			printf("未找到！\n");
		}
	}
	SListPrint(plist);

	//销毁函数
	SListDestory(&plist);

}


//菜单函数
void caidan()
{
	printf("\n********************************************\n");
	printf("*****   1、插入              2、删除   *****\n");
	printf("*****   3、查找              0、退出   *****\n");
	printf("********************************************\n");
}


//选择函数
void xuanze()
{
	int q = 0;
	int f = 0;
lai:
	caidan();
	printf("\n请选择->");
	scanf("%d", &q);
	switch (q)
	{
	case 0:
		printf("退出成功！");
		break;
	case 1:
		test2();
		printf("\n请问需要继续吗？(扣1继续)->");
		scanf("%d", &f);
		if(f == 1)
		{
			printf("\n");
			goto lai;
		}
		else
		{
			printf("退出成功");
			break;
		}
	case 2:
		test3();
		printf("\n请问需要继续吗？(扣1继续)->");
		scanf("%d", &f);
		if (f == 1)
		{
			printf("\n");
			goto lai;
		}
		else
		{
			printf("退出成功");
			break;
		}
	case 3:
		test4();
		printf("\n请问需要继续吗？(扣1继续)->");
		scanf("%d", &f);
		if (f == 1)
		{
			printf("\n");
			goto lai;
		}
		else
		{
			printf("退出成功");
			break;
		}
	default:
		printf("输入错误，请重新输入->");
		goto lai;
	}
}


int main()
{
	xuanze();
	return 0;
}