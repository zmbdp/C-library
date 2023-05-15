void SeqListCheckCapacity(SL* ps)
{
	if ((ps->size) == (ps->capacity))
	{
		int newcapacity = (ps->capacity) == 0 ? 4 : (ps->capacity) * 2;
		//SLDataType指的是类型，例如int这些
		SLDataType* tmp = (SLDataType*)realloc((ps->a), (sizeof(SLDataType) * newcapacity));
		if (tmp == NULL)
		{
			printf("失败！\n");
			exit(-1);//终止函数
		}
		(ps->a) = tmp;
		(ps->capacity) = newcapacity;
	}
}
