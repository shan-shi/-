#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu(void)
{
	printf("���԰汾���˳�һ���ظ�0�����ܲ����������\n�����Ӣ�ģ����Ŀ��ܻ���δ֪��BUG��\n\n");
	printf("\t1.������ϵ��     2.ɾ����ϵ��\n");
	printf("\t3.������ϵ��     4.������ϵ����Ϣ\n");
	printf("\t\t5.չʾ������ϵ��\n");
	printf("\t\t   0.�˳�\n");
	printf("����������:>");
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
			printf("�˳��ɹ�!\n");
			break;
		default:
			printf("�������! ����������\n");
			break;
		}
		system("pause");
		system("cls");
	} while (input);
	return 0;
}


