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
			k++;//英文字母
		else if (ch[i] >= '0' && ch[i] <= '9')
			z++;//数字
		else if (ch[i]==32)
			x++;//空格
		else//其余
			y++;
	
		i++;
	}
	printf("%d %d %d %d\n", k, z, x,y);
	return 0;
}