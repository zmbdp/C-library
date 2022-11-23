#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>                     //system("cls")的头文件
#include<windows.h>                    //Sleep的头文件
#include<string.h>                     //strlen的头文件
int main()
{
	char w1[] = "I Love You!";
	char w2[] = "###########";
	int zuo = 0;                       //zou为左字符
	int you = strlen(w1) - 1;          //you为右字符，strlen-求字符串长度
	while (zuo<=you)
	{
		w2[zuo] = w1[zuo];
		w2[you] = w1[you];
		zuo++;
		you--;
		system("cls");                 //system("cls")-清屏
		printf("%s\n", w2);            
		Sleep(521);                    //Sleep-字面意思，延迟一会儿(单位是毫秒)
	}
	return 0;
}
