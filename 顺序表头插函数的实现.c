void SeqListPushFront(SL* ps, SLDataType x)
{
	//检查是否需要增容
	SeqListCheckCapacity(ps);//结合我上次发的扩容函数，实现这行指令

	//扩容完成之后开始挪动
	int end = (ps->size) - 1;
	for (;end >= 0;end--)
	{
		ps->a[end + 1] = ps->a[end];
	}
	(ps->a[0]) = x;
	(ps->size)++;
}
