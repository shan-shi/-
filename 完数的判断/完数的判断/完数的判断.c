#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int max = 0;
	scanf("%d", &max);
	for (int i = 1; i <= max; i++)//i:������
	{
		int cs[100] = { 0 };
		int t = 0;
		for (int a = 1; a < i; a++)//a:������,ȡ����������
		{
			if (i % a == 0)
			{
				cs[t] = a;
				t++;
			}
		}
		int Sn = 0;
		for (int c = 0; c < t; c++)
		{
			Sn = Sn + cs[c];
		}
		if (Sn == i)
		{
			printf("%d its factors are ", i);
			for (int b = 0; b <t; b++)
			{
				printf("%d ", cs[b]);
			}
			printf("\n");
		}
	}
	return 0;
}