#pragma warning(disable:4996)
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define N 1000
typedef int SLDataType;//类型

////静态顺序表
////特点：如果满了，就能不插入
////缺点：给多大的空间合适，这个很难确定
//typedef struct SeList
//{
//	SLDataType arr[N];//静态顺序表
//	int size;//存储多少数据
//}SL;
//
////接口函数 -- 命名风格跟着STL走，方便以后学习STL
//
////初始化：	
//void SeqListInit(SL* ps);
////头插
//void SeqListPushFront(SL* ps, SLDataType x);
////尾插
//void SeqListPushBack(SL* ps, SLDataType x);
////头节点
//void SeqListPopFront(SL* ps);
////尾节点
//void SeqListPopBack(SL* ps);



//所以我们实现动态
typedef struct SeList
{
	SLDataType* a;
	int size;      //表示数组中存储多少数据
	int capacity;  //数组实际能储存数据的空间容量是多大
}SL;


//打印函数
SeqListprint(SL* ps);


//接口函数 -- 命名风格跟着STL走，方便以后学习STL

//初始化函数	
void SeqListInit(SL* ps);
//销毁函数
void SeqListDestory(SL* ps);
//扩容函数
void SeqListCheckCapacity(SL* ps);
//头插函数
void SeqListPushFront(SL* ps, SLDataType x);
//尾插函数
void SeqListPushBack(SL* ps, SLDataType x);
//头删函数函数
void SeqListPopFront(SL* ps);
//尾删函数函数
void SeqListPopBack(SL* ps);
//找元素，找到返回下标x，找不到返回-1
int SeqListFind(SL* ps, SLDataType x);
//指定pos下标插入x这个数字
void SeqListInsert(SL* ps, int pos, SLDataType x);
//删除pos位置的数据
void SeqListErase(SL* ps, int pos);