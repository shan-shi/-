#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age = 20;
	scanf("%d", &age);
	if (age < 18)
		printf("����\n");
	else if (age >= 18 & &age < 26)
		printf("����\n");
	else if (age >= 26 && age < 40)
		printf("����\n");
	else if (age >= 40 && age < 60)
		printf(" ׳��\n");
	else if (age >= 60 && age < 100)
		printf("����\n");
	else
		printf("�ϲ���\n");
	//else�������ifƥ��



	/*if (age >= 18)
		printf("����\n");
	else
	{
		printf("δ����\n");
		printf("����̸����\n");
	}*/
	return 0;
}
//c�����ǽṹ���ĳ����������
//˳��ṹ����ͷ��β����ѡ��ṹ����֧����ѭ���ṹ
//��֧��䣺 if switch

