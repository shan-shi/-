#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//for(��ʼ�����жϣ�������
	for (int i = 1; i <= 10; i++)
	{
		if (5 == i)
			break;

		//����forѭ��������������ҿ�����
		printf("%d ", i);//for�ڲ�ԭ�򲻸���ѭ������
	}
		return 0;
}