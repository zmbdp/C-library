#include "da.h"

/*！！！！！！！！！！！！！！！！！！！！！！兜兵晒痕方！！！！！！！！！！！！！！！！！！！！！*/
void ChuShiHua(DD* pead)
{
	assert(pead);
	pead->a = (LX*)malloc(sizeof(LX) * 4);
	if (pead->a == NULL)
	{
		printf("制否払移!!!");
		exit(-1);
	}
	pead->mowei = 4;
	pead->size = 0;
}



/*！！！！！！！！！！！！！！！！！！！！！！住算痕方！！！！！！！！！！！！！！！！！！！！！！*/
void jiaohuan(LX* e, LX* f)
{
	LX top = *e;
	*e = *f;
	*f = top;
}



/*！！！！！！！！！！！！！！！！！！！！！！貧卞痕方！！！！！！！！！！！！！！！！！！！！！！*/
void shangyi(LX* a, int erzi)
{
	int fuqin = (erzi - 1) / 2;
	while (erzi > 0)
	{
		if (a[erzi] > a[fuqin])
		{
			jiaohuan(&a[erzi], &a[fuqin]);

			erzi = fuqin;
			fuqin = (erzi - 1) / 2;
		}
		else
		{
			break;
		}
	}
}



/*！！！！！！！！！！！！！！！！！！！！！！峨秘痕方！！！！！！！！！！！！！！！！！！！！！！*/
void ChaRu(DD* pead, LX x)
{
	assert(pead);
	//登僅頁倦俶勣奐否
	if (pead->size == pead->mowei)
	{
		LX* tmp = (LX*)realloc((pead->a), (sizeof(LX) * (pead->mowei) * 2));
		if (tmp == NULL)
		{
			printf("奐否払移!!!");
			exit(-1);
		}
		pead->a = tmp;
		pead->mowei *= 2;
	}
	//奐否頼撹��蝕兵験峙
	pead->a[pead->size] = x;
	(pead->size)++;

	//登僅頁倦俶勣貧卞
	shangyi(pead->a, pead->size - 1);
}



/*！！！！！！！！！！！！！！！！！！！！！！和卞痕方！！！！！！！！！！！！！！！！！！！！！！*/
void xiayi(LX* a, int jici, int fuqin)
{
	int erzi = (fuqin * 2) + 1;
	while (fuqin < jici)
	{
		if (erzi + 1 < jici && a[erzi + 1] > a[erzi])
		{
			++erzi;
		}

		if (a[fuqin] < a[erzi])
		{
			jiaohuan(&a[fuqin], &a[erzi]);
			fuqin = erzi;
			erzi = fuqin * 2 + 1;
		}
		else
		{
			break;
		}
	}
}



/*！！！！！！！！！！！！！！！！！！！！！！評茅痕方！！！！！！！！！！！！！！！！！！！！！！*/
void shanchu(DD* pead)
{
	assert(pead);
	assert(!panduan(pead));
	
	//評茅方象
	jiaohuan(&(pead->a[0]), &(pead->a[pead->size - 1]));
	pead->size--;

	xiayi(pead->a, pead->size, 0);
}



/*！！！！！！！！！！！！！！！！！！！！！！函競痕方！！！！！！！！！！！！！！！！！！！！！！*/
int quding(DD* pead)
{
	assert(pead);
	return pead->a[0];
}



/*！！！！！！！！！！！！！！！！！！！！！！登僅痕方！！！！！！！！！！！！！！！！！！！！！！*/
bool panduan(DD* pead)
{
	assert(pead);

	return pead->size == 0;
}




/*！！！！！！！！！！！！！！！！！！！！！！登僅痕方！！！！！！！！！！！！！！！！！！！！！！*/
int sizef(DD* pead)
{
	assert(pead);
	return pead->size;
}
