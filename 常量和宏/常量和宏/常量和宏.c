#define _CRT_SECURE_NO_WARNINGS 1
//define ��һ��Ԥ����ָ��
//1.define�������
//
//#define MAX 1000
//
#include<stdio.h>
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define�����
#define ADD(x,y) ((x)+(y))

int main()
{

	printf("%d\n",4* ADD(2, 3));//ADD(2,3)��������2+3������4*ADD(2,3)=4*2+3��������滻�ģ���

	return 0;
}
