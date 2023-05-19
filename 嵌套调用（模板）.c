#include<stdio.h>
dayin()
{
	printf("hehe\n");
}
xunhuan()
{
	int i = 0;
	for (i = 1;i <= 3;i++)
	{
		dayin();
	}
}
int main()
{
	xunhuan();
	return 0;
