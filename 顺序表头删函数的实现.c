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
