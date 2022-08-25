#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0, b = 0, c = 0 ;
	long An = 0, Bn = 0;
	float Cn=0;
	scanf("%d%d%d", &a,&b, &c);
	for (int i = 1; i <= a; i++)
		An += i;
	for (int i = 1; i <= b; i++)
		Bn = (i *i)+Bn;
	for (int i = 1; i <= c; i++)
		Cn = (1.0/ i)+Cn;
	printf("%.2f\n",An+Bn+Cn );
	return 0;
}