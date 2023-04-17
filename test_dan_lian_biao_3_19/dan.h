#pragma warning(disable:4996)
#pragma once
#include<Assert.h>
#include<stdio.h>
#include<stdlib.h>//malloc头文件
typedef int SLTDateType;

typedef struct SListNode//SListNode：链表的名字
{
	SLTDateType data;//data：储存的数字
	struct SListNode* next;//nest：链表的首地址
}SLT;


//随便插
void SListInsert(SLT** pphead, SLTDateType x, SLTDateType s);
//随便删
void SListErase(SLT** pphead, SLTDateType x);

//后插
void SListPushBack(SLT** pphead, SLTDateType x);
//打印函数
void SListPrint(SLT* phead);
//销毁函数
void SListDestory(SLT** pphead);
//查找函数
SLTDateType* chazhao_and_xiugai(SLT* pphead, SLTDateType x);
//删除函数
void SListDestory(SLT **pphead);