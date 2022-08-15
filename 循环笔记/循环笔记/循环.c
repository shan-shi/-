#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	while (1)
//		printf("hehe\n");//while(表达式) 循环语句；
//	return 0;
////}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			//break;//在while循环中，break永久终止循环
//		continue;//1 2 3 4  后面死循环 跳过本次循环（continue后面的代码）进行下一次判断
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
int main()
{
	int ch = 0;
	//ctrl+z--getchar 读取结束(EOF)
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}