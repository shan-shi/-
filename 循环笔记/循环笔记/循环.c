#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	while (1)
//		printf("hehe\n");//while(���ʽ) ѭ����䣻
//	return 0;
////}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			//break;//��whileѭ���У�break������ֹѭ��
//		continue;//1 2 3 4  ������ѭ�� ��������ѭ����continue����Ĵ��룩������һ���ж�
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
int main()
{
	int ch = 0;
	//ctrl+z--getchar ��ȡ����(EOF)
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}