#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


/*写递归代码时：
1，不能死递归，都要有跳出条件每次递归逼近跳出条件
2，递归不能太深
*/
//
//int main()
//{
//	printf("hehe\n");
//	main();//递归，自己调用自己
//	return 0;//大事化小
//}

//一个无符号整形，打印每一位
//
//void print(unsigned int num)
//{
//	if (num > 9)//递归存在限制条件，每次递归后越来越接近条件
//	{ 
//		print(num/10);
//	}
//	printf("%d ", num % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//递归函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//	return 0;
//}

//void test(int n)
//{
//	if (n < 10000)//Stack overflow :栈溢出  
//	{
//		test(n + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	
//	if (*str != '\0')  
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//		return 0;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//递归与迭代
//求n的阶乘

//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//
//	int i = 0;
//	int ret = 1;
//	//迭代(循环）
//	for (i = 1; i <= 0; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//

//int Fac(int n)
//{
//	if (n > 1)
//		return n * Fac(n - 1);
// else
//		return 1;
//}
//
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	printf("%d", Fac(n));
//	return 0;
//}
//有一些功能可以写迭代也可以用递归的方式

//求第n个斐波那契数

//int count = 0;
//int fb(int n)
//{//递归可以算但次数太多，效率太低
//	// 计算第三数的计算机次数
//	if(3==n)
//	count++;
//	if (n <= 2)
//		return 1;
//	else
//		return fb(n - 1) + fb(n - 2);
//}

int fb(int n)
{
	int a = 1,b=1,c=0;
	if (n <= 2)
		return 1;
	else
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", fb(n));
	/*printf("%d\n", count);*/
	return 0;
}


