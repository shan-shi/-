#define _CRT_SECURE_NO_WARNINGS 1
//define 是一个预处理指令
//1.define定义符号
//
//#define MAX 1000
//
#include<stdio.h>
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define定义宏
#define ADD(x,y) ((x)+(y))

int main()
{

	printf("%d\n",4* ADD(2, 3));//ADD(2,3)被换成了2+3，所以4*ADD(2,3)=4*2+3宏是完成替换的！！

	return 0;
}
