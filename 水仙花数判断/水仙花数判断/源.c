#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	for (int i = 100; i <1000; i++)
	{
		int a = i % 10;
		int b = i /10% 10;
		int c = i / 100;
		int Sn = 0;
		Sn = a * a * a + b * b * b + c * c * c;
		if (Sn == i)
			printf("%d\n", i);
	}
	return 0;
}