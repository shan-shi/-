#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	int k = 0;
	int a[100][100] = { 0 };
	int b[100][100] = { 0 };
	int c[100][100] = { 0 };
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++)                 //对矩阵c进行处理
	{
		for (int j = 0; j < k; j++)
		{
			sum = 0;
			for (int z = 0; z < m;z++)   //矩阵c中每一个元素的循环计算
			{
				sum += a[i][z] * b[z][j]; //对矩阵c中的某一元素进行计算
			}
			c[i][j] = sum ;           //给矩阵c中的某一元素进行赋值
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}