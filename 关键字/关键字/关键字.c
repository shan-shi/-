#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int char； 变量名不能是关键字
	{
		int a = 10;//自动创建的，自动销毁的-自动变量 auto
		//auto省略掉了                       
	}
	//extern用来声明外部符号
	
	//register 寄存器关键字

	//大量频繁被使用的数据放在寄存器
	register int num = 100;//建议num的值存放在寄存器中
	//计算机中数据可以存在
	//内存 硬盘 网盘 高速缓存 寄存器

	//de
	return 0;
}