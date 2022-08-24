#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int input=0;
	printf("欢迎使用便携关机:\n\t\t\t\t\t1.关机\t\t\t\t\t\n\t\t\t\t\t2.取消\n");
again:
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		system("shutdown -s -t 0");
		break;
	case 2:
		break;
	default:
		printf("请重新输入\n");
		goto again;
	}
	return 0;
}