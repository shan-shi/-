#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age = 20;
	scanf("%d", &age);
	if (age < 18)
		printf("少年\n");
	else if (age >= 18 & &age < 26)
		printf("青年\n");
	else if (age >= 26 && age < 40)
		printf("中年\n");
	else if (age >= 40 && age < 60)
		printf(" 壮年\n");
	else if (age >= 60 && age < 100)
		printf("老年\n");
	else
		printf("老不死\n");
	//else和最近的if匹配



	/*if (age >= 18)
		printf("成年\n");
	else
	{
		printf("未成年\n");
		printf("不能谈恋爱\n");
	}*/
	return 0;
}
//c语言是结构化的程序设计语言
//顺序结构（从头到尾），选择结构（分支），循环结构
//分支语句： if switch

