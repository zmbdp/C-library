#pragma warning(disable:4996)
#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 20
typedef int Status;

//定义书本数据
typedef struct {
	char* name;//书名
	char* author;//作者
	char* press;//出版社
	char* ISBN;//书号
	double price;//价格
	char* time;//出版时间
	char* type;//类型
}Book;

//定义书架
typedef struct {
	Book book[999];
	int length;//书架的长度
	int size;//实际的书本
}bookshelf;

void InitList(bookshelf* L, Book* book1, Book* book2, Book* book3, Book* book4); //初始化
void LocateElem(bookshelf* L, char* ISBN, char* name);//查找 
void Listinsert(bookshelf* L); //插入
void ListDelete(bookshelf* L); //删除
void ListAlter(bookshelf* L); //修改
void ListOrder(bookshelf* L); //排序
void showbook(bookshelf* L);//打印书籍数据
void save_bookshelf(bookshelf* L);//追加写入文件
void ove_bookshelf(bookshelf* L);//重新写入
void retBooks(bookshelf* L);//释放内存