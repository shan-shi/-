#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu(void)
{
	printf("测试版本，退出一定回复0，不能叉掉！！！！\n最好用英文（中文可能会有未知的BUG）\n\n");
	printf("\t1.增加联系人     2.删除联系人\n");
	printf("\t3.查找联系人     4.更改联系人信息\n");
	printf("\t\t5.展示所有联系人\n");
	printf("\t\t   0.退出\n");
	printf("请输入数字:>");
}

enum chioce
{
	Exit,
	add,
	sub,
	search,
	change,
	showall
};

int main(void)
{
	int input = 0;
	people * head, * node, * end;
	head = (people*)malloc(sizeof(people));
	head->next = NULL;
	end = head;
	do 
	{
		menu();
		scanf("%d", &input);

		switch(input)
		{
		case add:
			addfunc(&head,&end,&node);
			break;
		case sub:
			subfunc(&head);
			showallfunc(&head);
			break;
		case search:
			searchfunc(&head);
			break;
		case change:
			changefunc(&head);
			showallfunc(&head);
			break;
		case showall:
			showallfunc(&head);
			break;
		case Exit:
			printf("退出成功!\n");
			break;
		default:
			printf("输入错误! 请重新输入\n");
			break;
		}
		system("pause");
		system("cls");
	} while (input);
	return 0;
}


