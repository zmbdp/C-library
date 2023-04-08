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
