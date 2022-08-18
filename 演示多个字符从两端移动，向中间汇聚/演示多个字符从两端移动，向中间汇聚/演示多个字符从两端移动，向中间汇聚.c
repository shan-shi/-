#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
	//welcome to bit!!!!!!
	// //w############!
	//we###########!!
	//...
	//welcome to be!!!!!!
int main()
{
	char arr1[] =  "welcome to bit!!!!!!" ;
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;//char arr[]="a,b,c";  a,b,c,\0³¤¶È-1
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		Sleep(1000);//ÔÝÍ£1s
		system("cls");//Çå¿ÕÆÁÄ»
		left++;
		right--;
		printf("%s\n", arr2);
	}
	return 0;
}