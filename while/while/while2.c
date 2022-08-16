#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	printf("请确认密码（Y/N）:>");
	//getchar();//清理缓冲区 处理‘\n’
	int tmp;
	while ((tmp = getchar()) != '\n');
	int ch = getchar();
	if (ch == 'Y')
		printf("确认成功\n");
	else
		printf("确认失败\n");
	return 0;
}

