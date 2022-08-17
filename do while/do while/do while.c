#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//do
// (语句);
//while(表达式);
//循环体至少执行一次

int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}

int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			//			break;     1234
			//			continue; 1234 死循环
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}