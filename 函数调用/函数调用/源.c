#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//����Ĭ�Ϸ���int
int is__prime(int n)//����һ�㲻��ӡ��ֻ����һ������
{
	//2->n-1֮��ĵ�����n
	int j = 0;
	//for (j = 2; j < n; j++)
	for(j=2;j<=sqrt(n);j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	//100-200֮�������
	int i = 0,count=0;
	for (i = 100; i <= 200; i++)
	{
		//�ж��Ƿ�������
		if (is__prime(i) == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d", count);
	return 0;
}

//is_lesp_year
//����ж������귵��1
//�������귵��0��
//
int is_leap_year(int n)
{
	if(((n%4==0)&&(n%100!=0) || (n%400==0)))
		return 1;
	else
		return 0;
}

int main()
{
	int y = 0,count=0;
	for (y = 1000; y <= 2000; y++)
	{
		if(is_leap_year(y)==1)
		{
			printf("%d ",y);
			count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}

//��������������ֲ���
int binary_search(int a[], int k,int s)
{
	int left = 0;
	int right = s - 1;
	while(left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
			right = mid-1;
		else if (a[mid] < k)
			left = mid+1;
		else
			return mid;
	}
	return -1;//�Ҳ�����
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�ҵ��ͷ����ҵ�λ�õ��±�
	// �Ҳ����ͷ���-1
	//����arr���Σ�ʵ�ʴ��ݵĲ������鱾�����ǵ�һ��Ԫ�صĵ�ַ
	int ret=binary_search(arr,key,sz);
	if (-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���:%d\n", ret);
	}
	return 0;
}