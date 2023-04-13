#include<stdio.h>
int main()
{
	int a = 0;
	int* p = &a;
	printf("%d\n", sizeof(p));
	return 0;
}
