#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	int b = (++a) + (++a) + (++a);
	printf("%d\n", b);


	//int a = 10;
	//int b = a++;// 后置++,先使用（赋值给b)，再a++

	//printf("%d\n", b);//10
	//printf("%d\n", a);//11


//	int a = 10;
//	int b = ++a;//前置++，先++后使用
//	printf("%d\n", b);//11
//	printf("%d\n", a);//11 
	return 0;
}
