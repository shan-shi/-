#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	double m = 0,c=0,z=0;
	int n = 0;
	scanf("%lf%d", &m, &n);
	z = m;
	for (int i = 1; i <= n;i++)
	m /= 2;
	c = c + z + z;
	for (int i = 3; i <= n ; i++)
	{
		c = c + z / pow(2, i - 2);
	}
	printf("%.2f %.2f", m, c);
	return 0;
}