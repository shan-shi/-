#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main()
{
	char ch[200]={'0'};
	gets(ch);
	int i = 0,k=0,z=0,x=0,y=0;
	while (i < strlen(ch))
	{
		if ((ch[i] >= 'a' && ch[i] <= 'z')||(ch[i]>='A'&&ch[i]<='Z'))
			k++;//Ӣ����ĸ
		else if (ch[i] >= '0' && ch[i] <= '9')
			z++;//����
		else if (ch[i]==32)
			x++;//�ո�
		else//����
			y++;
	
		i++;
	}
	printf("%d %d %d %d\n", k, z, x,y);
	return 0;
}