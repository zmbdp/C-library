#include"dan.h"


/*——————————————————————乱插函数—————————————————————*/
void SListInsert(SLT** pphead, SLTDateType x, SLTDateType s)//x下标，s数字
{
	SLT* newjiedian = (SLT*)malloc(sizeof(SLT));
	if (newjiedian == NULL)
	{
		printf("内存申请失败！\n即将退出！！！\n");
		exit(-1);
	}
	newjiedian->data = s;
	SLT* tali = (*pphead);
	if (x == 0)
	{
		newjiedian->next = tali;
		(*pphead) = newjiedian;
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0;i < x;i++)
		{
			tali = tali->next;
		}

		//找到目标了
		newjiedian->next = tali;

		tali = (*pphead);

		for (i = 0;i < x - 1;i++)
		{
			tali = tali->next;
		}
		tali->next = newjiedian;
	}
}



/*——————————————————————乱删函数—————————————————————*/
void SListErase(SLT** pphead, SLTDateType x)//x下标
{
	int i = 0;
	SLT* tali = (*pphead);
	SLT* Tali = (*pphead);

	//下标为0时
	if (x == 0)
	{
		//设置一个新的结构体，存第二个开始的地址
		SLT* newpphead = tali->next;
		//释放第一个空间
		free(*pphead);
		(*pphead) = NULL;
		//把新的头空间赋予老的
		(*pphead) = newpphead;
	}


	//正常情况下
	else
	{
		for (i = 0;i < (x - 1);i++)
		{
			Tali = Tali->next;//找出x的前一个地址
		}
		for (i = 0;i <= x;i++)
		{
			tali = (tali->next);//找出x后一个地址
		}
		Tali->next = tali;
	}
}



/*——————————————————————后插函数—————————————————————*/
void SListPushBack(SLT* (*pphead), SLTDateType x)
{
	//申请新节点的地址
	SLT* newnode = (SLT*)malloc(sizeof(SLT));
	(newnode->data) = x;
	(newnode->next) = NULL;

	//判断是否为第一指针//判断是否需要增容
	if ((*pphead) == NULL)
	{
		(*pphead) = newnode;//newnode是申请新节点的地址
	}
	else
	{
		//创建另一个临时单链表，用来查找尾节点
		SLT* tail = (*pphead);//SLT* (...)本质意思就是创建一个新的STL变量。
		//找到尾节点，然后把new的值赋给他
		while ((tail->next) != NULL)
		{
			tail = (tail->next);
		}
		//开始对接
		(tail->next) = newnode;
	}
}



/*——————————————————————打印函数—————————————————————*/
void SListPrint(SLT* phead)
{
	SLT* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", (cur->data));
		cur = (cur->next);
	}
	printf("\n");
}




/*——————————————————————查找函数—————————————————————*/
SLTDateType* chazhao_and_xiugai(SLT* pphead, SLTDateType x)
{
	SLT*xunzhao = pphead;
	while (xunzhao != NULL)
	{
		if ((xunzhao->data) == x)
		{
			return xunzhao;
		}
		else
		{
			xunzhao = xunzhao->next;
		}
	}
	return NULL;
}



/*——————————————————————销毁函数—————————————————————*/
void SListDestory(SLT** pphead)
{
	SLT* shan = (*pphead);
	while (shan != NULL)
	{
		assert(pphead);
		SLT* new = shan->next;
		free(shan);
		shan = new;
	}
	(*pphead) = NULL;
}
