#pragma once
#pragma warning(disable:4996)
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int LX;
typedef struct zhan
{
	LX* a;
	int top;
	int capacity;
}zhan;

void chushihua(zhan* lb);

void charu(zhan* lb, LX x);

void shanchu(zhan* lb);

LX quzhanding(zhan* lb);

void shifang(zhan* lb);

bool panduankongbukong(zhan* lb);
