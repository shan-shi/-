#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	//������ȷ���ַ���123456��
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s",password);
		if (strcmp(password,"123456")==0)//�����ַ����Ƚϣ�������==��Ӧ��ʹ��strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("��������������˳�����\n");
	return 0;
}
