//дһ����������Ϸ
//1���Զ�����һ��1-100������
//2��������
//a���¶��ˣ��͹�ϲ�㣬��Ϸ����
//b����´��ˣ�������´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
//3����Ϸһ��һֱ�棬�����˳���Ϸ
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>

void menu()
{
	printf("***************************************\n");
	printf("************1.play*********************\n");
	printf("************0.exit*********************\n");
}

void game()
{
	//��������Ϸ��ʵ��
	//1.���������
	//rand����������һ��0-32767�����ֵ
	//ʱ��--ÿʱÿ�̶��ڱ�
	int ret = rand()%100+1;//%100��������0-99��Ȼ��+1����Χ����1-100
	//printf("%d\n", ret);
	//2.������
	int guess;

	while(1)
	{
		printf("�������:>\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if(guess>ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��,�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
		system("pause");
		system("cls");
	} while (input);
	return 0;
}