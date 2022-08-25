#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	double sz[100] = { 1,2 };
	for (int i = 2; i < 100; i++)
	{
		sz[i] = sz[i - 2] + sz[i - 1];
	}
	int n = 0;
	float out = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		out = out + sz[i + 1] / sz[i];
	}
	printf("%.2f", out);
	return 0;
}