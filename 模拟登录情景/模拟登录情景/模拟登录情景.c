#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	//假设正确的字符“123456”
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s",password);
		if (strcmp(password,"123456")==0)//两个字符串比较；不能用==，应该使用strcmp
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	return 0;
}
