#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ䣺4�ֽ�byte
//	printf("%p\n", &a);//%pר��������ӡ��ַ
//	int* pa = &a;//pa������ŵ�ַ����c�����н�paΪָ�����,*˵��pa��ָ�������int˵��paִ�еĶ�����int���͵�
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}


//1.�ڴ�
//�ڴ��ǵ������ر���Ҫ�Ĵ�����������������еĳ������ж������ڴ��н��е�
//����Ϊ����Ч��ʹ���ڴ棬�Ͱ��ڴ滮�ֳ���һ����СС���ڴ浥Ԫ��ÿ���ڴ浥Ԫ�Ĵ�С��һ���ֽ�
//Ϊ���ܹ���Ч�ķ��ʵ��ڴ��ÿһ����Ԫ���͸��ڴ浥Ԫ�����˱�ţ���Щ��ű���Ϊ���ڴ浥Ԫ�ĵ�ַ
//						�ڴ�
//					һ���ֽ�     0xFFFFFFFF										��ʵ�����жԿռ����������
//					һ���ֽ�     0xFFFFFFFE

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//	*pa = 20;//*�����ò���  *pa����ͨ��pa��ĵ�ַ���ҵ�a����ʱa=20
//	printf("%d\n", a);
//	return 0;
//}


//ָ������Ĵ�С
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	return 0;
}
//ָ���С��32λƽ̨Ϊ4�ֽڣ�64λƽ̨Ϊ8�ֽ�