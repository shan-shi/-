#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void Add(int* p)//传址
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



////函数的嵌套调用
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

////函数的链式访问
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	////链式访问
//	//printf("%d\n", strlen("abc"));//函数返回值做下一语句的参数
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//
//	//printf("%s\n", strcpy(arr1, arr2));
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

////函数的申明和定义
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下,告知，一般先声明
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}




//写一个计算器：
/*
	a-加法
	b-减法
	c-乘法
	d-除法
*/

//e
//#include"Add.h"//函数的声明一般放在头文件

//导入静态库
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