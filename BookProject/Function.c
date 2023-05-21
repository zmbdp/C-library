#include "Book.h";
void menu()
{
	printf("=============================================================================\n");
	printf("=========            1.增加书籍              2.删除书籍            ==========\n");
	printf("=========            3.查找书籍            4.修改书籍数据          ==========\n");
	printf("=========         5.显示所有书籍              6.保存数据           ==========\n");
	printf("===================                 0.exit                ===================\n");
}
int main()
{
	bookshelf books;
	Book book1;
	book1.name = "三国演义";
	book1.author = "罗贯中";
	book1.press = "上海人民美术出版社";
	book1.ISBN = "2220423-1";
	book1.price = 69.9;
	book1.time = "元末明初";
	book1.type = "四大名著";
	Book book2;
	book2.name = "水浒传";
	book2.author = "施耐庵";
	book2.press = "上海人民美术出版社";
	book2.ISBN = "2220423-2";
	book2.price = 69.9;
	book2.time = "元末明初";
	book2.type = "四大名著";
	Book book3;
	book3.name = "红楼梦";
	book3.author = "曹雪清";
	book3.press = "上海人民美术出版社";
	book3.ISBN = "2220423-3";
	book3.price = 69.9;
	book3.time = "清乾隆四十九年 (西元1784年)";
	book3.type = "四大名著";
	Book book4;
	book4.name = "西游记";
	book4.author = "吴承恩";
	book4.press = "河北美术出版社";
	book4.ISBN = "2220423-4";
	book4.price = 69.9;
	book4.time = "明代";
	book4.type = "四大名著";
	//初始化
	InitList(&books, &book1, &book2, &book3, &book4);
	menu();
	printf("\n==================++++++++********欢迎来到图书小练习********++++++++==================\n");
	printf("\n请选择->");
	int choose = 0;
	scanf("%d", &choose);
	while (1)
	{
		if (choose == 0)//退
		{
			printf("\n退出成功!!!");
			break;
		}
		if (choose == 1)//增
		{
			Listinsert(&books);
		}
		if (choose == 2)//删
		{
			//删除
			ListDelete(&books);
			showbook(&books);
		}
		if (choose == 3)//查
		{
			//查找
			char* ISBN = (char*)malloc(100 * sizeof(char));
			printf("\n请输入需要查找书籍ISBN->");
			scanf("%s", ISBN);
			char* name = (char*)malloc(100 * sizeof(char));
			printf("\n请输入需要查找书籍的名字->");
			scanf("%s", name);
			LocateElem(&books, ISBN, name);
		}
		if (choose == 4)//改
		{
			//修改
			ListAlter(&books);
		}
		if (choose == 5)//打印
		{
			//打印
			showbook(&books);
		}
		if (choose == 6)//保存
		{
			ListOrder(&books);
			printf("请问你是要重新保存还是追加保存(1.重新保存，2.追加保存)?\n请选择->");
			int n = 0;
			scanf("%d", &n);
			if (n == 1)
			{
				ove_bookshelf(&books);
			}
			if (n == 2)
			{
				save_bookshelf(&books);
			}
			if (books.size != 0) {
				printf("保存成功!!!\n");
			}
		}
		if (choose > 6 || choose < 0)//
		{
			printf("\n输入错误，请重新输入\n");
		}
		menu();
		printf("\n请选择->");
		scanf("%d", &choose);
	}
	retBooks(&books);
	return 0;
}