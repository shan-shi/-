#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int input=0;
	printf("��ӭʹ�ñ�Я�ػ�:\n\t\t\t\t\t1.�ػ�\t\t\t\t\t\n\t\t\t\t\t2.ȡ��\n");
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
		printf("����������\n");
		goto again;
	}
	return 0;
}