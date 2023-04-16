#include"shun.h"
#define N 100;

void TestSeqList1(int q)
{
	SL sl;
	//初始化函数
	SeqListInit(&sl);

	if (q > 0 && q < 8)
	{
		int g = 0;
		//先尾插入一些数字
		printf("请插入5个数据->");
		for(int u=0;u<5;u++)
		{
			scanf("%d", &g);
			SeqListPushBack(&sl, g);
		}
		printf("\n原来顺序表:\n");
		SeqListprint(&sl);
	}

	//头插函数
	if (q == 1)
	{
		//头插函数
		int x = 0;
		int w = 0;
		int i = 0;
		printf("请问你想头插几次？->");
		scanf("%d", &w);//次数
		printf("请问你想头插什么数？->");
		for (i = 0;i < w;i++)
		{
			scanf("%d", &x);//插入数字
			SeqListPushFront(&sl, x);
		}
		printf("\n头插之后:\n");
		//打印看效果
		SeqListprint(&sl);
	}

	//头删函数
	if (q == 2)
	{
		int x = 0;
		printf("请问你想头删几个？->");
		scanf("%d", &x);
		//头删函数
		for (int i = 0;i < x;i++)
		{
			SeqListPopFront(&sl);
		}
		printf("\n头删之后:\n");
		//打印看效果
		SeqListprint(&sl);
	}

	//尾插函数
	if(q==3)
	{
		//尾插本体
		int y = 0;
		int w = 0;
		int i = 0;
		printf("请问你想插几次？->");
		scanf("%d", &w);//次数
		printf("请问你想插什么数？->");
		for (i = 0;i < w ;i++)
		{
			scanf("%d", &y);//插入数字
			SeqListPushBack(&sl, y);
		}
		printf("\n尾插之后：\n");
		//打印函数
		SeqListprint(&sl);
	}

	//尾删函数
	if(q==4)
	{
		int s = 0;
		printf("请问你想尾删几个？->");
		scanf("%d", &s);
		for (int i = 0;i < s;i++)
		{
			//尾删函数
			SeqListPopBack(&sl);
		}
		printf("\n尾删之后:\n");
		//打印看效果
		SeqListprint(&sl);
	}

	//查找元素函数
	if(q==5)
	{
		//查找元素函数本体
		int x = 0;
		printf("请问需要查找什么数字？->");
		do
		{
			scanf("%d", &x);
			int f = SeqListFind(&sl, x);
			if (f != (-1))
			{
				printf("这个数字在第%d个\n", (f + 1));
				break;
			}
			else
			{
				printf("很抱歉，这个数不存在,请重试->");
			}
		} while (x);
	}

	//插入x到pos下标函数
	if (q == 6)
	{
		int x = 0;//下标
		int y = 0;//元素
		//插入函数本体
		printf("\n想插第几个？->");
		scanf("%d", &x);
		printf("想插什么数字？->");
		scanf("%d", &y);
		SeqListInsert(&sl, (x - 1), y);
		if (x >= 0 && x <= (sl.size))
		{
			printf("\n插入之后:\n");
			SeqListprint(&sl);
		}
	}

	//删除下标为pos的元素
	if (q == 7)
	{
		int b = 0;
		//删除函数本体
		printf("请问想删除第几个元素？->");
		scanf("%d", &b);
		SeqListErase(&sl, (b - 1));

		printf("\n删除之后：\n");
		SeqListprint(&sl);
	}

	//销毁函数
	SeqListDestory(&sl);
}

//菜单函数
void caidan()
{
	printf("****************************************\n");
	printf("****1、头插                  2、头删****\n");
	printf("****3、尾插                  4、尾删****\n");
	printf("***5、查找元素            6、插入元素***\n");
	printf("***7、删除元素               0、退出****\n");
	printf("****************************************\n");
}

int main()
{
	int q = 0;
	caidan();
	do
	{
		do
		{
			printf("\n请问你想测试什么？->");
			break;
		} while (q > 0 && q < 8);

		scanf("%d", &q);
		if(q > 7)
		{
			printf("选择错误，请重新选择->");
		}
		if (q == 0)
		{
			printf("\n退出成功！\n");
		}
		TestSeqList1(q);
	} while (q);
	return 0;
}