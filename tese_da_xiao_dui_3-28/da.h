#pragma once
#pragma warning(disable:4996)
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int LX;

typedef struct DaDui
{
	LX* a;
	int size;
	int mowei;
}DD;

void ChuShiHua(DD* pead);

void ChaRu(DD* pead, LX x);

void shangyi(LX* a, int erzi);

void shanchu(DD* pead);

void xiayi(LX* a, int jici);

int quding(DD* pead);

bool panduan(DD* pead);

int sizef(DD* pead);

