void SeqListPushBack(SL* ps, SLDataType x)
{
	//检查是否需要增容，增容函数在我以前发的代码里面
	SeqListCheckCapacity(ps);

	//空间足够之后，就可以放数进去了
	(ps->a[ps->size]) = x;
	(ps->size)++;
}
