#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void Add(int* p)//��ַ
//{
//	(* p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}



////������Ƕ�׵���
//void test_3()
//{
//	printf("hehe\n");
//}
//
//int test_2()
//{
//	test_3();
//	return 0;
//}
//
//int main()
//{
//	test_2();
//	return 0;
//}

////��������ʽ����
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	////��ʽ����
//	//printf("%d\n", strlen("abc"));//��������ֵ����һ���Ĳ���
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//
//	//printf("%s\n", strcpy(arr1, arr2));
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

////�����������Ͷ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������һ��,��֪��һ��������
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}




//дһ����������
/*
	a-�ӷ�
	b-����
	c-�˷�
	d-����
*/

//e
//#include"Add.h"//����������һ�����ͷ�ļ�

//���뾲̬��
#include"sub.h"
#pragma comment(lib,"sub.lib")

int main()
{
	int a = 10;
	int b = 20;
	//int c = Add(a, b);
	int c = Sub(a, b);
	
	printf("%d\n", c);
	return 0;
}