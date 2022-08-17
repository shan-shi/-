#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int  n = 0, i = 1,z=1;
//	long long a = 1, Sn = 0;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		while (z <= i)
//		{
//			a = a * z;
//			z++;
//		}
//		Sn = Sn + a;
//		i++;
//	}
//	printf("%lld\n", Sn);
//	return 0;
//}
int main()
{

	int n = 0, i = 1;
	long long a = 1, Sn = 0;
	scanf("%d", &n);
	while (i <= n)
	{
		Sn = Sn + a;
		a = (i + 1) * a;
		i++;
	}
	printf("%lld", Sn);
	return 0;
}