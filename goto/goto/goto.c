#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	
//	goto flag;
//	return 0;
//}
// 关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入我是猪，就取消关机
//
//
//int main()
//{
//	//关机
//	//cmd: shutdown -s -t 6060秒后关机
//	//shutdown -a取消关机
//	//c语言中system()-执行系统命令
//	char input[20] = { 0 };//存放信息
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在一分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s",input);
//	if (strcmp(input,"我是猪")==0)//比较
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//

int main()
{
	
	char input[20] = { 0 };//存放信息
	system("shutdown -s -t 60");
	while (1)
	{
		printf("请注意，你的电脑将在一分钟内关机，如果输入：我是猪，就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)//比较
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}


//goto只能在一个函数内跳转