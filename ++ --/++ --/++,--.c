#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	int b = (++a) + (++a) + (++a);
	printf("%d\n", b);


	//int a = 10;
	//int b = a++;// ����++,��ʹ�ã���ֵ��b)����a++

	//printf("%d\n", b);//10
	//printf("%d\n", a);//11


//	int a = 10;
//	int b = ++a;//ǰ��++����++��ʹ��
//	printf("%d\n", b);//11
//	printf("%d\n", a);//11 
	return 0;
}
