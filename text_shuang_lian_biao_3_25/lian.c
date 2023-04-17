#include"shuang.h"
/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª³õÊ¼»¯º¯ÊýµÄÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
LB* ListInit()
{
	LB* phead = (LB*)malloc(sizeof(LB));
	phead->next = phead;
	phead->prev = phead;
	return phead;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ªËæ±ã²åº¯ÊýÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
//void suibiancha(LB* phead, LX x, LX y)
//{
//	assert(phead);
//	LB* cur = phead->next;
//	LB* cha = (LB*)malloc(sizeof(LB));
//	cha->data = y;
//	while (cur != phead)
//	{
//		if (cur->data == x)
//		{
//			LB* qcur = cur->prev;
//			qcur->next = cha;
//			cur->prev = cha;
//			cha->prev = qcur;
//			cha->next = cur;
//			//´òÓ¡º¯Êý
//			ListPrintf(phead);
//			break;
//		}
//		cur = cur->next;
//	}
//	if (cur == phead)
//	{
//		printf("ÕÒ²»µ½Ö¸¶¨²åÈëÎ»ÖÃ\n");
//	}
//}


void suibiancha(LB* pos,LX x)
{
	assert(pos);
	LB* new = (LB*)malloc(sizeof(LB));
	new->data = x;
	LB* qpos = pos->prev;
	qpos->next = new;
	pos->prev = new;
	new->prev = qpos;
	new->next = pos;
}




/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ªÍ·²åº¯ÊýµÄÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void ListPushFront(LB* phead, LX x)
{
	assert(phead);
	LB* newhead = (LB*)malloc(sizeof(LB));
	newhead->data = x;
	newhead->next = phead->next;
	phead->next->prev = newhead;
	newhead->prev = phead;
	phead->next = newhead;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ªÍ·É¾º¯ÊýµÄÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void ListPopFront(LB* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LB* newhead = phead->next->next;
	free(phead->next);
	phead->next->next = phead->next->prev = phead->next->data = NULL;
	phead->next = newhead;
	newhead->prev = phead;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ªÎ²²åº¯ÊýµÄÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void ListPushBack(LB* phead, LX x)
{
	assert(phead);
	LB* mowei = phead->prev;
	LB* newmowei = (LB*)malloc(sizeof(LB));

	//¿ªÊ¼Á´½Ó
	mowei->next = newmowei;
	newmowei->prev = mowei;
	newmowei->next = phead;
	phead->prev = newmowei;

	//¸³Öµ
	newmowei->data = x;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ªÎ²²åº¯ÊýµÄÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void ListPopBack(LB* phead)
{
	assert(phead);
	assert(phead->next != phead);

	LB* nweweibu = phead->prev->prev;
	free(phead->prev);
	phead->prev->next = NULL;
	phead->prev->prev = NULL;
	phead->prev = nweweibu;
	nweweibu->next = phead;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª²éÕÒº¯ÊýµÄÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
LB* ListFind(LB* phead, LX x)
{
	assert(phead);

	LB* chazhao = phead->next;
	while (chazhao != phead)
	{
		if (chazhao->data == x)
		{
			return chazhao;
		}
		chazhao = chazhao->next;
	}
	return NULL;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª´òÓ¡º¯ÊýµÄÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void ListPrintf(LB* phead)
{
	assert(phead);
	LB* n = phead->next;
	while (n != phead)
	{
		printf("%d ", n->data);
		n = n->next;
	}
	printf("\n");
}