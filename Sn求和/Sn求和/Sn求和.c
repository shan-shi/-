#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 2,n=0,i=1,Sn=0;
	scanf("%d", &n);
	while (i <= n)
	{
		if (i > 1)
			a = a * 10   + 2;
		else
			a = 2;
		Sn =Sn+a ;
			i++;
	}
	printf("%d\n", Sn);
	return 0;
}