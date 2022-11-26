#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
    int m = 0;                                 //初始值
    int n = 0;                                 //终结值
    int z = 0;                                 //统计几个9
    printf("请输入需要求9的区域：");
    scanf("%d%d", &m, &n);
    int i = m;
    for (i = m;i <= n;i++)
    {
        if (i / 1000 == 9)//数千位上的9
        {
            z++;
            printf("%d\n", i);
        }
        if (i / 100 == 9)//数百位上的9
        {
            z++;
            printf("%d\n", i);
        }
        if (i / 10 == 9)//十位上的9
        {
            z++;
            printf("%d\n", i);
        } 
        if (i % 10 == 9)//数个位上的9
        {
            z++;
            printf("%d\n", i);
        }
    }
    printf("%d~%d一共有%d个9", m, n, z);
    return 0;
}
