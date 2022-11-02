#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int sz[101] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &sz[i]);
	}
	int temp = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (sz[j] > sz[j + 1])
			{
				temp = sz[j];
				sz[j] = sz[j + 1];
				sz[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (sz[j] == sz[j + 1])
			{
				sz[j] = 0;
			}
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (sz[j] < sz[j + 1])
			{
				temp = sz[j];
				sz[j] = sz[j + 1];
				sz[j + 1] = temp;
			}
		}
	}
	int count = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (sz[i] == 0)
			break;
		count++;
		if (i == n - 1 - 1)
			count++;
	}
	
	for (int i = 0; i < count-1 ; i++)
	{
		for (int j = 0; j < count-1  - i; j++)
		{
			if (sz[j] > sz[j + 1])
			{
				temp = sz[j];
				sz[j] = sz[j + 1];
				sz[j + 1] = temp;
			}
		}
	}
	printf("%d\n", count);
	for (int i = 0; i < count-1 ; i++)
		printf("%d ", sz[i]);
	printf("%d", sz[count-1]);
	printf("\n");
	return 0;
}