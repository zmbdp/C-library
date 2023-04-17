#include"zhan.h"
/*！！！！！！！！！！！！！！！！！！！！兜兵晒痕方！！！！！！！！！！！！！！！！！！！！！！！*/
void chushihua(zhan* lb)
{
	assert(lb);
	lb->a = NULL;
	lb->capacity = 0;
	lb->top = 0;
}



/*！！！！！！！！！！！！！！！！！！！！！峨秘痕方！！！！！！！！！！！！！！！！！！！！！！！*/
void charu(zhan* lb, LX x)
{
	assert(lb);
	if (lb->top == lb->capacity)
	{
		int newcapacity = lb->capacity == 0 ? 4 : lb->capacity * 2;
		LX* kongjian = realloc(lb->a, sizeof(LX) * newcapacity);
		if (kongjian == NULL)
		{
			printf("奐否払移�。。�");
			exit(-1);
		}
		lb->a = kongjian;
		lb->capacity = newcapacity;
	}
	lb->a[lb->top] = x;
	lb->top++;
}



/*！！！！！！！！！！！！！！！！！！！！！硫評痕方！！！！！！！！！！！！！！！！！！！！！！！*/
void shanchu(zhan* lb)
{
	assert(lb);
	assert(!panduankongbukong(lb));
	lb->top--;
}



/*！！！！！！！！！！！！！！！！！！！！函媚競方象痕方！！！！！！！！！！！！！！！！！！！！！*/
LX quzhanding(zhan* lb)
{
	assert(lb);
	assert(!panduankongbukong(lb));
	return lb->a[lb->top - 1];
}



/*！！！！！！！！！！！！！！！！！！！！登僅頁倦葎腎痕方！！！！！！！！！！！！！！！！！！！！*/
bool panduankongbukong(zhan* lb)
{
	return lb->top == 0;
}



/*！！！！！！！！！！！！！！！！！！！！！瞥慧痕方！！！！！！！！！！！！！！！！！！！！！！！*/
void shifang(zhan* lb)
{
	assert(lb);
	free(lb->a);
	lb->a = NULL;
	lb->capacity = 0;
	lb->top = 0;
}