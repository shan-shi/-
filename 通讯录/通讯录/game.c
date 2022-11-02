#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void addfunc(people** p, people** end, people** node)
{
	(*node) = (people*)malloc(sizeof(people));
	(*node)->next = NULL;
	(*end)->next = (*node);
	(*end) = (*node);
	printf("请输入Ta的名字:>");
	scanf("%s", (*node)->peoinfo.name);
	printf("请输入Ta的性别:>");
	scanf("%s", (*node)->peoinfo.sex);
	printf("请输入Ta的电话:>");
	scanf("%s", (*node)->peoinfo.telepone);
	printf("请输入Ta的住址:>");
	scanf("%s", (*node)->peoinfo.adtress);
	printf("保存成功!\n");
}

void showallfunc(people** head)
{
	people* start = *(head);
	if (start->next != NULL)
	{
		start = start->next;
		printf("%-20s\t%-5s\t%-12s\t%-20s\n", "名字", "性别", "电话", "地址");
		while (start != NULL)
		{
			printf("%-20s\t%-5s\t%-12s\t%-20s\n", start->peoinfo.name, start->peoinfo.sex, start->peoinfo.telepone,
				start->peoinfo.adtress);
			start = start->next;
		}
	}
	else
		printf("您未存入数据\n");
}

void searchfunc(people** head)
{
	people* start = *(head);
	if (start->next != NULL)
	{
		int in = 0;
		char cmp[50] = { " " };
		printf("请输入想如何查找联系人\n");
		printf("1.姓名\t\t2.电话号码\n:>");
		scanf("%d", &in);
		if (in == 1)//真
		{
			printf("请输入要查找的姓名:>");
			scanf("%s", &cmp);

			start = start->next;
			while (start != NULL)
			{
				if (!strcmp(start->peoinfo.name, cmp))
				{
					printf("%-20s\t%-5s\t%-12s\t%-20s\n", "名字", "性别", "电话", "地址");
					printf("%-20s\t%-5s\t%-12s\t%-20s\n", start->peoinfo.name, start->peoinfo.sex, start->peoinfo.telepone,
						start->peoinfo.adtress);
					return;
				}
				start = start->next;
			}
			printf("对不起，您可能没有存入该联系人\n");

		}
		else if (in == 2)
		{
			printf("请输入要查找的电话:>");
			scanf("%s", &cmp);

			start = start->next;
			while (start != NULL)
			{
				if (!strcmp(start->peoinfo.telepone, cmp))
				{
					printf("%-20s\t%-5s\t%-12s\t%-20s\n", "名字", "性别", "电话", "地址");
					printf("%-20s\t%-5s\t%-12s\t%-20s\n", start->peoinfo.name, start->peoinfo.sex, start->peoinfo.telepone,
						start->peoinfo.adtress);
					return;
				}
				start = start->next;
			}
			printf("对不起，您可能没有存入该联系人\n");
		}
		else
			printf("输入错误\n");
	}
	else
		printf("您未存入数据\n");
}

void subfunc(people** head)
{
	people* start = *(head);
	people* last = start;
	people* tmp = NULL;
	if (start->next != NULL)
	{
		int in = 0;
		char cmp[50] = { " " };
		printf("请输入想如何查找联系人\n");
		printf("1.姓名\t\t2.电话号码\n:>");
		scanf("%d", &in);
		if (in == 1)//真
		{
			printf("请输入要查找的姓名:>");
			scanf("%s", &cmp);

			start = start->next;
			while (start != NULL)
			{
				if (!strcmp(start->peoinfo.name, cmp))
				{
					goto change;
				}
				last = start;
				start = start->next;
			}
			printf("对不起，您可能没有存入该联系人\n");

		}
		else if (in == 2)
		{
			printf("请输入要查找的电话:>");
			scanf("%s", &cmp);

			start = start->next;
			while (start != NULL)
			{
				if (!strcmp(start->peoinfo.telepone, cmp))
				{
					goto change;
				}
				last = start;
				start = start->next;
			}
			printf("对不起，您可能没有存入该联系人\n");
		}
		else
			printf("输入错误\n");
	}
	else
		printf("您未存入数据\n");
	return;
change:
	tmp = start->next;
	last->next = tmp;
	free(start);
	printf("删除成功！\n");
	start = NULL;
}

void changefunc(people**head)
{
	people* start = *(head);
	people* last = start;
	people* tmp = NULL;
	if (start->next != NULL)
	{
		int in = 0;
		char cmp[50] = { " " };
		printf("请输入想如何查找联系人\n");
		printf("1.姓名\t\t2.电话号码\n:>");
		scanf("%d", &in);
		if (in == 1)//真
		{
			printf("请输入要查找的姓名:>");
			scanf("%s", &cmp);

			start = start->next;
			while (start != NULL)
			{
				if (!strcmp(start->peoinfo.name, cmp))
				{
					goto change;
				}
				last = start;
				start = start->next;
			}
			printf("对不起，您可能没有存入该联系人\n");

		}
		else if (in == 2)
		{
			printf("请输入要查找的电话:>");
			scanf("%s", &cmp);

			start = start->next;
			while (start != NULL)
			{
				if (!strcmp(start->peoinfo.telepone, cmp))
				{
					goto change;
				}
				last = start;
				start = start->next;
			}
			printf("对不起，您可能没有存入该联系人\n");
		}
		else
			printf("输入错误\n");
	}
	else
		printf("您未存入数据\n");
	return;
change:
	printf("请输入Ta的新名字:>");
	scanf("%s", start->peoinfo.name);
	printf("请输入Ta的新性别:>");
	scanf("%s", start->peoinfo.sex);
	printf("请输入Ta的新电话:>");
	scanf("%s", start->peoinfo.telepone);
	printf("请输入Ta的新住址:>");
	scanf("%s", start->peoinfo.adtress);
	printf("保存成功!\n");
}

