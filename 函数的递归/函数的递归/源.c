#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


/*д�ݹ����ʱ��
1���������ݹ飬��Ҫ����������ÿ�εݹ�ƽ���������
2���ݹ鲻��̫��
*/
//
//int main()
//{
//	printf("hehe\n");
//	main();//�ݹ飬�Լ������Լ�
//	return 0;//���»�С
//}

//һ���޷������Σ���ӡÿһλ
//
//void print(unsigned int num)
//{
//	if (num > 9)//�ݹ��������������ÿ�εݹ��Խ��Խ�ӽ�����
//	{ 
//		print(num/10);
//	}
//	printf("%d ", num % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//�ݹ麯���Լ������Լ�
//	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
//	return 0;
//}

//void test(int n)
//{
//	if (n < 10000)//Stack overflow :ջ���  
//	{
//		test(n + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	
//	if (*str != '\0')  
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//		return 0;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//�ݹ������
//��n�Ľ׳�

//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//
//	int i = 0;
//	int ret = 1;
//	//����(ѭ����
//	for (i = 1; i <= 0; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//

//int Fac(int n)
//{
//	if (n > 1)
//		return n * Fac(n - 1);
// else
//		return 1;
//}
//
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	printf("%d", Fac(n));
//	return 0;
//}
//��һЩ���ܿ���д����Ҳ�����õݹ�ķ�ʽ

//���n��쳲�������

//int count = 0;
//int fb(int n)
//{//�ݹ�����㵫����̫�࣬Ч��̫��
//	// ����������ļ��������
//	if(3==n)
//	count++;
//	if (n <= 2)
//		return 1;
//	else
//		return fb(n - 1) + fb(n - 2);
//}

int fb(int n)
{
	int a = 1,b=1,c=0;
	if (n <= 2)
		return 1;
	else
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", fb(n));
	/*printf("%d\n", count);*/
	return 0;
}


