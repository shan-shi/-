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
	for (int i = 0; i < n; i++)                 //�Ծ���c���д���
	{
		for (int j = 0; j < k; j++)
		{
			sum = 0;
			for (int z = 0; z < m;z++)   //����c��ÿһ��Ԫ�ص�ѭ������
			{
				sum += a[i][z] * b[z][j]; //�Ծ���c�е�ĳһԪ�ؽ��м���
			}
			c[i][j] = sum ;           //������c�е�ĳһԪ�ؽ��и�ֵ
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