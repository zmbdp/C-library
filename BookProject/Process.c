#include "Book.h";

/*=============================================初始化============================================*/
void InitList(bookshelf* L, Book* book1, Book* book2, Book* book3, Book* book4)
{
	if (L == NULL) {
		return;
	}
	L->book[0] = *book1;
	L->book[1] = *book2;
	L->book[2] = *book3;
	L->book[3] = *book4;
	L->length = 999;//先定义3本书
	L->size = 4;
}

/*==============================================查找=============================================*/
void LocateElem(bookshelf* L, char* ISBN, char* name)
{
	printf("==============================================查找书籍=============================================");
	/*扣1按照ISBM来进行查找
	 扣2按照书名查找*/
	printf("\n请问需要按照什么方式查找?(扣1按照ISBM来进行查找扣2按照书名查找)->");
	int choose = 0;
	int i = 0;
qu:
	scanf("%d", &choose);
	//ISBM
	if (choose == 1)
	{
		while (i < L->size)
		{
			if (strcmp((L->book[i].ISBN), ISBN) == 0)
			{
				printf("============================================================================================================\n");
				printf("书名->%s ; 作者->%s ; 出版社->%s ; ISBN->%s ;出版时间->%s ; 价格->%lf ; 类别->%s\n", L->book[i].name, L->book[i].author, L->book[i].press, L->book[i].ISBN, L->book[i].time, L->book[i].price, L->book[i].type);
				printf("============================================================================================================");
				return;
			}
			i++;
		}
	}
	//书名
	else if (choose == 2)
	{
		for (int i = 0; i < L->size; i++)
		{
			if (strcmp((L->book[i].name), name) == 0)
			{
				printf("============================================================================================================\n");
				printf("书名->%s ; 作者->%s ; 出版社->%s ; ISBN->%s ;出版时间->%s ; 价格->%lf ; 类别->%s\n", L->book[i].name, L->book[i].author, L->book[i].press, L->book[i].ISBN, L->book[i].time, L->book[i].price, L->book[i].type);
				printf("============================================================================================================");
				return;
			}
		}
	}
	else
	{
		printf("\n输入错误，请重新输入->");
		goto qu;
	}
	printf("\n未找到此书籍!!!\n");
}

/*==============================================插入=============================================*/
void Listinsert(bookshelf* L)
{
	//使用尾插插入吧
	printf("==============================================新增书籍=============================================");
	char* name = (char*)malloc(100 * sizeof(char));
	printf("\n请输入书名->");
	scanf("%s", name);

	char* author = (char*)malloc(100 * sizeof(char));
	printf("\n请输入作者->");
	scanf("%s", author);

	char* press = (char*)malloc(100 * sizeof(char));
	printf("\n请输入出版社->");
	scanf("%s", press);

	char* ISBN = (char*)malloc(100 * sizeof(char));
	printf("\n请输入ISBN->");
	scanf("%s", ISBN);

	char* time = (char*)malloc(100 * sizeof(char));
	printf("\n请输入出版时间->");
	scanf("%s", time);

	double price;
	printf("\n请输入价格->");
	scanf("%lf", &price);

	char* type = (char*)malloc(100 * sizeof(char));
	printf("\n请输入书籍类型->");
	scanf("%s", type);
	Book book;
	book.name = name;
	book.author = author;
	book.press = press;
	book.ISBN = ISBN;
	book.time = time;
	book.price = price;
	book.type = type;
	L->book[L->size] = book;
	(L->size)++;
}

/*==============================================删除=============================================*/
void ListDelete(bookshelf* L)
{
	printf("==============================================删除书籍=============================================");
	int i = 0;
	printf("\n请输入需要删除书籍的ISBN->");
	char* ISBN = (char*)malloc(100 * sizeof(char));
	scanf("%s", ISBN);
	while (i < L->size)
	{
		if (strcmp((L->book[i].ISBN), ISBN) == 0)
		{
			for (int j = i; (j + 1) < L->size; j++)
			{
				L->book[j] = L->book[j + 1];
			}
			(L->size)--;
			printf("\n删除成功!!!\n");
			return;
		}
		i++;
	}
	printf("\n未找到书籍!!!\n");
}

/*==============================================修改=============================================*/
void ListAlter(bookshelf* L)
{
	printf("==============================================修改书籍=============================================");
	printf("\n请先查找此书籍(请输入该书籍的ISBN)->");
	int i = 0;
	int flag = 0;
	char* ISBN = (char*)malloc(100 * sizeof(char));
	scanf("%s", ISBN);
	while (i < L->size)
	{
		if (strcmp((L->book[i].ISBN), ISBN) == 0)
		{
			flag = 1;
			break;
		}
		i++;
	}
	//如果进去了，说明找到了
	if (flag == 1)
	{
		//开始修改，修改什么类型的数据，switch语句
		int choose;
		printf("\n(1：书名；2：作者；3：出版社；4：ISBN；5：价格；6：出版时间；7：书籍类型)\n请选择需要修改该书籍的什么->");
		scanf("%d", &choose);
		if (choose == 1)
		{
			char* name = (char*)malloc(100 * sizeof(char));
			printf("\n请输入修改后的书名->");
			scanf("%s", name);
			L->book[i].name = name;
		}

		if (choose == 2){
			char* author = (char*)malloc(100 * sizeof(char));
			printf("\n请输入修改后的作者->");
			scanf("%s", author);
			L->book[i].author = author;
		}

		if (choose == 3) {
			char* press = (char*)malloc(100 * sizeof(char));
			printf("\n请输入修改后的出版社->");
			scanf("%s", press);
			L->book[i].press = press;
		}

		if (choose == 4) {
			char* ISBN = (char*)malloc(100 * sizeof(char));
			printf("\n请输入修改后的ISBN->");
			scanf("%s", ISBN);
			L->book->ISBN = ISBN;
		}

		if (choose == 6) {
			char* time = (char*)malloc(100 * sizeof(char));
			printf("\n请输入修改后的出版时间->");
			scanf("%s", time);
			L->book[i].time = time;
		}

		if (choose == 5) {
			double price;
			printf("\n请输入修改后的价格->");
			scanf("%lf", &price);
			L->book->price = price;
		}

		if (choose == 7) {
			char* type = (char*)malloc(100 * sizeof(char));
			printf("\n请输入修改后的书籍类型->");
			scanf("%s", type);
			L->book[i].type = type;
		}
	}
	else
	{
		//说明未找到
		printf("\n未找到该书籍!!!\n");
	}
}

/*==============================================排序=============================================*/
Status compare(const void* a, const void* b) {
	Book* x = (Book*)a;
	Book* y = (Book*)b;

	//先根据出版社进行排序
	Status press_cmp = strcmp(x->press, y->press);

	//如果不是0的话就说明出版社不相同，直接输出就行
	if (press_cmp != 0) {
		return press_cmp;
	}
	//到这里说明出版社相同，再根据时间排序
	else {
		return strcmp(x->time, y->time);
	}
}

void ListOrder(bookshelf* L)
{
	// 排序使用qsort排序
	qsort(L->book, L->size, sizeof(Book), compare);

}

/*=========================================打印书籍数据==========================================*/
void showbook(bookshelf* L)
{
	if (L->size == 0)
	{
		printf("\n一本书都没有啦!!!\n");
		return;
	}
	//每次打印之前先排个序
	ListOrder(L);
	int i = 0;				
	printf("========================================================================================================================\n");
	while (i < L->size)
	{
		printf("\n书名->%s ; 作者->%s ; 出版社->%s ; ISBN->%s ;出版时间->%s ; 价格->%lf ; 类别->%s\n", L->book[i].name, L->book[i].author, L->book[i].press, L->book[i].ISBN, L->book[i].time, L->book[i].price, L->book[i].type);
		i++;
	}
	printf("========================================================================================================================\n");
}

/*=========================================保存书籍数据==========================================*/
//追加写入
void save_bookshelf(bookshelf* L) {
	if (L->size == 0)
	{
		printf("\n一本书都没有啦!!!\n");
		return;
	}
	FILE* file;
	file = fopen("Books.txt", "a"); // 以追加模式打开文件
	if (file == NULL) {
		printf("无法打开文件");
		return;
	}

	// 循环追加数据到文件中
	for (int i = 0; i < L->size; i++) {
		Book* book = &(L->book[i]);
		fprintf(file, "书名：%s, 作者：%s, 出版社：%s, ISBN：%s, 价格: %f, 出版时间: %s, 类型: %s\n", book->name, book->author, book->press, book->ISBN, book->price, book->time, book->type);
	}

	fclose(file);
}
//重新写入
void ove_bookshelf(bookshelf* L) {
	if (L->size == 0)
	{
		printf("\n一本书都没有啦!!!\n");
		return;
	}
	FILE* file;
	file = fopen("Books.txt", "w"); // 以写入模式打开文件
	if (file == NULL) {
		printf("无法打开文件\n");
		return -1;
	}
	// 先写入新的内容
	fputs("新的书籍信息->\n", file);
	fclose(file);

	// 再追加内容到文件中
	file = fopen("Books.txt", "a"); // 以追加模式打开文件
	if (file == NULL) {
		printf("无法打开文件\n");
		return -1;
	}
	int size = L->size;
	for (int i = 0; i < size; i++) {
		Book* book = &(L->book[i]);
		fprintf(file, "书名：%s, 作者：%s, 出版社：%s, ISBN：%s, 价格: %f, 出版时间: %s, 类型: %s\n", book->name, book->author, book->press, book->ISBN, book->price, book->time, book->type);
	}
	fclose(file);
}


/*=========================================释放函数==========================================*/
void retBooks(bookshelf* L)
{
	// 因为 L 是由调用函数传进来的指针参数，因此要小心释放内存的时机和方式
	free(L->book);    // 释放 book 数组的内存
	L->size = 0;      // size 置为 0，表示数据已经被释放
	free(L);        // 如果 L 是在调用函数里面定义的，这里可以考虑是否需要将 L 的内存也一起释放
}