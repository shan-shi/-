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
// �ػ�����
//ֻҪ�������������Ծ���1�����ڹػ������������������ȡ���ػ�
//
//
//int main()
//{
//	//�ػ�
//	//cmd: shutdown -s -t 6060���ػ�
//	//shutdown -aȡ���ػ�
//	//c������system()-ִ��ϵͳ����
//	char input[20] = { 0 };//�����Ϣ
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s",input);
//	if (strcmp(input,"������")==0)//�Ƚ�
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
	
	char input[20] = { 0 };//�����Ϣ
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺��������ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)//�Ƚ�
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}


//gotoֻ����һ����������ת