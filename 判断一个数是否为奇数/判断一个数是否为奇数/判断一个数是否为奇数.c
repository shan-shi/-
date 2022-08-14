#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int in = 0,i=0;
	scanf("%d", &in);
	if (in % 2 != 0)
		printf("是奇数\n一百以内奇数有：\n");
	else
		printf("不是奇数\n一百以内的奇数有：\n");
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d ", i);
		i++;
	}
	return 0;
}