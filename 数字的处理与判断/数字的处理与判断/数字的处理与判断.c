#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	long long in = 0;
	scanf("%lld", &in);
	int i = 0;
	int cs[5] = { 0 };
	while (in != 0)
	{
		cs[i++] = in % 10;
		in /= 10;
	}
	printf("%d\n", i);
	int a = i-1,b=0;
	while (a>=0)
	{
		printf("%d ", cs[a]);
		a--;
	}
	printf("\n");
	while (b <i)
	{
		printf("%d", cs[b]);
		b++;
	}
	printf("\n");
	return 0;
}