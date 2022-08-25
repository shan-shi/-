#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//函数默认返回int
int is__prime(int n)//函数一般不打印，只处理一个功能
{
	//2->n-1之间的的数字n
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
	//100-200之间的素数
	int i = 0,count=0;
	for (i = 100; i <= 200; i++)
	{
		//判断是否是素数
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
//如果判断是闰年返回1
//不是闰年返回0；
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

//整型有序数组二分查找
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
	return -1;//找不到了
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//找到就返回找到位置的下标
	// 找不到就返回-1
	//数组arr传参，实际传递的不是数组本身，而是第一个元素的地址
	int ret=binary_search(arr,key,sz);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是:%d\n", ret);
	}
	return 0;
}