#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main ()
{

	int a = 3;
	int b = 0;
	int c = a || b;
	printf("%d\n", c);

	//int a = 3;
	//int b = 5;
	//int c = a && b;
	//printf("%d\n", c);

	//强制类型转换
	//int a =(int) 3.14;
	//printf("%d\n", a);
	return 0;
}
