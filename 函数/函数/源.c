�⺯����
IO����
�ַ�������������strcmp strlen
 �ַ���������	toupper
�ڴ��������		memcpy	memcmp	memset
ʱ��/���ں���	time
��ѧ����			sqrt pow
�����⺯��		

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello";
	strcpy(arr1,arr2);//���������ַ���
	printf("%s", arr1);//��ӡarr1 %s-���ַ����ĸ�ʽ��ӡ

	return 0;
}

int main()
{
	char arr[] = "hello bit";
	memset(arr, 'x', 5);//ǰ����ַ�����x
	printf("%s", arr);
	return 0;
}


�Զ��庯��
ret_type fun_name(para1,  * )
{
	statement;//�����
}
ret_type ��������
fun_name ������
para1 ��������

//д�����������ֵ

int get_max(int x,int y)
{
	int z = 0;
		z = x > y ? x : y;
	return z;//�������ֵ
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);	//�����ĵ���
	printf("%d\n", max);
	return 0; 
}

void Swap1(int x, int y)//ʵ�ʲ���-ʵ��
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}
//�����������͵ĵط�д����void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
void Swap2(int* x, int* y)//��ʽ����-�β�
{
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
}

int main()
{
	int a = 10;
	int b = 20;
	//дһ�����������������ͱ�����ֵ
	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap1(a, b);//ʵ�ʲ���-ʵ��
	Swap2(&a,&b);//��ʽ����-�β�
	printf("������a=%d b=%d\n", a, b);
	return 0;
}


int main()
{
	int a = 10;//4���ֽڵĿռ�
	int* pa = &a;//pa����һ��ָ�����
	*pa = 20;

	printf("%d\n", a);
	return 0;
}