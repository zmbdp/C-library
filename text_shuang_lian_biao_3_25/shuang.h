#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LX;

typedef struct ListNode
{
	LX data;
	struct ListNode* next;
	struct ListNode* prev;
}LB;

//³õÊ¼»¯
LB* ListInit();
//Ëæ±ã²å(1)
//void suibiancha(LB* phead, LX x, LX y);
//Ëæ±ã²å(2)
void suibiancha(LB* pos, LX x);
//Ëæ±ãÉ¾

//Í·²å
void ListPushFront(LB* phead, LX x);
//Í·É¾
void ListPopFront(LB* phead);
//Î²²å
void ListPushBack(LB* phead, LX x);
//Î²É¾
void ListPopBack(LB* phead);
//Ñ°ÕÒÊý×Ö
LB* ListFind(LB* phead, LX x);
//´òÓ¡º¯Êý
void ListPrintf(LB* phead);