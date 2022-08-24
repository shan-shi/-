库函数：
IO函数
字符串操作函数：strcmp strlen
 字符操作函数	toupper
内存操作函数		memcpy	memcmp	memset
时间/日期函数	time
数学函数			sqrt pow
其他库函数		

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello";
	strcpy(arr1,arr2);//复制两个字符串
	printf("%s", arr1);//打印arr1 %s-以字符串的格式打印

	return 0;
}

int main()
{
	char arr[] = "hello bit";
	memset(arr, 'x', 5);//前五个字符换成x
	printf("%s", arr);
	return 0;
}


自定义函数
ret_type fun_name(para1,  * )
{
	statement;//语句项
}
ret_type 返回类型
fun_name 函数名
para1 函数参数

//写个函数找最大值

int get_max(int x,int y)
{
	int z = 0;
		z = x > y ? x : y;
	return z;//返回最大值
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);	//函数的调用
	printf("%d\n", max);
	return 0; 
}

void Swap1(int x, int y)//实际参数-实参
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}
//函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回
void Swap2(int* x, int* y)//形式参数-形参
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
	//写一个函数交换两个整型变量的值
	printf("交换前：a=%d b=%d\n", a, b);
	Swap1(a, b);//实际参数-实参
	Swap2(&a,&b);//形式参数-形参
	printf("交换后：a=%d b=%d\n", a, b);
	return 0;
}


int main()
{
	int a = 10;//4个字节的空间
	int* pa = &a;//pa就是一个指针变量
	*pa = 20;

	printf("%d\n", a);
	return 0;
}