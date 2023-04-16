#include"shun.h"


/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª³õÊ¼»¯ÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void SeqListInit(SL* ps)
{
	(*ps).a = NULL;
	(*ps).size = (*ps).capacity = 0;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ªÀ©ÈÝº¯ÊýÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void SeqListCheckCapacity(SL* ps)
{
	if ((ps->size) == (ps->capacity))
	{
		int newcapacity = (ps->capacity) == 0 ? 4 : (ps->capacity) * 2;
		//SLDataTypeÖ¸µÄÊÇÀàÐÍ£¬ÀýÈçintÕâÐ©
		SLDataType* tmp = (SLDataType*)realloc((ps->a), (sizeof(SLDataType) * newcapacity));
		if (tmp == NULL)
		{
			printf("Ê§°Ü£¡\n");
			exit(-1);//ÖÕÖ¹º¯Êý
		}
		(ps->a) = tmp;
		(ps->capacity) = newcapacity;
	}
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ªÍ·²åÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void SeqListPushFront(SL* ps, SLDataType x)
{
	//¼ì²éÊÇ·ñÐèÒªÔöÈÝ
	SeqListCheckCapacity(ps);

	//À©ÈÝÍê³ÉÖ®ºó¿ªÊ¼Å²¶¯
	int end = (ps->size) - 1;
	for (;end >= 0;end--)
	{
		ps->a[end + 1] = ps->a[end];
	}
	(ps->a[0]) = x;
	(ps->size)++;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ªÎ²²åÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void SeqListPushBack(SL* ps, SLDataType x)
{
	//¼ì²éÊÇ·ñÐèÒªÔöÈÝ
	SeqListCheckCapacity(ps);

	//¿Õ¼ä×ã¹»Ö®ºó£¬¾Í¿ÉÒÔ·ÅÊý½øÈ¥ÁË
	(ps->a[ps->size]) = x;
	(ps->size)++;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ªÍ·É¾º¯ÊýÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void SeqListPopFront(SL* ps)
{
	int i = 0;
	for (i = 0;i < ((ps->size) - 1);i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	assert((ps->size) > 0);
	(ps->size)--;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ªÎ²É¾º¯ÊýÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void SeqListPopBack(SL* ps)
{
	//if ((ps->size) > 0)
	//{
	//	//(ps->a[ps->size]) = 0;
	//	(ps->size)--;
	//}
	assert((ps->size) > 0);
	(ps->size)--;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ªÕÒxÔªËØº¯ÊýÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
int SeqListFind(SL* ps, SLDataType x)
{
	int i = 0;
	while (i < (ps->size))
	{
		if (ps->a[i] == x)
		{
			return i;
		}
		i++;
	}
	return -1;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª²åÈëxµ½posÏÂ±êº¯ÊýÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	if (pos > (ps->size) || pos < 0)
	{
		printf("ÏÂ±ê´íÎó£¬²åÈëÊ§°Ü£¡\n");
		return;
	}
	SeqListCheckCapacity(ps);
	int i = 0;
	int j = 0;
	int arr[100] = { 0 };
	while (i <= (ps->size))
	{
		if (i == pos)
		{
			arr[i] = x;
			i++;
		}
		else
		{
			arr[i] = (ps->a[j]);
			j++;
			i++;
		}
	}
	for (i = 0;i <= (ps->size);i++)
	{
		(ps->a[i]) = arr[i];
	}
	(ps->size)++;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ªÉ¾³ýposÏÂ±êÊýº¯ÊýÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void SeqListErase(SL* ps, int pos)
{
	int arr[9999] = { 0 };
	int i = 0;//arr
	int j = 0;//ps.a
	for (i = 0;i < (ps->size);i++)
	{
		if (j == pos)
		{
			j++;
			i--;
		}
		else
		{
			arr[i] = (ps->a[j]);
			j++;
		}
	}
	for (i = 0;i < ((ps->size) - 1);i++)
	{
		(ps->a[i]) = arr[i];
	}
	(ps->size)--;
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª´òÓ¡º¯ÊýÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
SeqListprint(SL* ps)
{
	for (int i = 0;i < ps->size;i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}



/*¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ªÏú»Ùº¯ÊýÊµÏÖ¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª¡ª*/
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}