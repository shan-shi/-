#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//for(初始化；判断；调整）
	for (int i = 1; i <= 10; i++)
	{
		if (5 == i)
			break;

		//建议for循环变量采用左闭右开区间
		printf("%d ", i);//for内部原则不更改循环变量
	}
		return 0;
}