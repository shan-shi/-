#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
	{
	int a = 0, b = 0, i = 0, z = 0;
	scanf("%d %d", &a, &b);
	i = a < b ? a : b;
	z = a < b ? b : a;
	while (i>0)
	{
		i--;
		if (a % i == 0 && b % i == 0)
			break;
	}
	while (z > 0)
	{
		z++;
		if (z % a == 0 && z % b == 0)
			break;
	}
	printf("%d %d\n", i, z);
	return 0;
	}