#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int in = 0,i=0;
	scanf("%d", &in);
	if (in % 2 != 0)
		printf("������\nһ�����������У�\n");
	else
		printf("��������\nһ�����ڵ������У�\n");
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d ", i);
		i++;
	}
	return 0;
}