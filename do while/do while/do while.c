#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//do
// (���);
//while(���ʽ);
//ѭ��������ִ��һ��

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
			//			continue; 1234 ��ѭ��
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}