#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void addfunc(people** p, people** end, people** node)
{
	(*node) = (people*)malloc(sizeof(people));
	(*node)->next = NULL;
	(*end)->next = (*node);
	(*end) = (*node);
	printf("������Ta������:>");
	scanf("%s", (*node)->peoinfo.name);
	printf("������Ta���Ա�:>");
	scanf("%s", (*node)->peoinfo.sex);
	printf("������Ta�ĵ绰:>");
	scanf("%s", (*node)->peoinfo.telepone);
	printf("������Ta��סַ:>");
	scanf("%s", (*node)->peoinfo.adtress);
	printf("����ɹ�!\n");
}

void showallfunc(people** head)
{
	people* start = *(head);
	if (start->next != NULL)
	{
		start = start->next;
		printf("%-20s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "�绰", "��ַ");
		while (start != NULL)
		{
			printf("%-20s\t%-5s\t%-12s\t%-20s\n", start->peoinfo.name, start->peoinfo.sex, start->peoinfo.telepone,
				start->peoinfo.adtress);
			start = start->next;
		}
	}
	else
		printf("��δ��������\n");
}

void searchfunc(people** head)
{
	people* start = *(head);
	if (start->next != NULL)
	{
		int in = 0;
		char cmp[50] = { " " };
		printf("����������β�����ϵ��\n");
		printf("1.����\t\t2.�绰����\n:>");
		scanf("%d", &in);
		if (in == 1)//��
		{
			printf("������Ҫ���ҵ�����:>");
			scanf("%s", &cmp);

			start = start->next;
			while (start != NULL)
			{
				if (!strcmp(start->peoinfo.name, cmp))
				{
					printf("%-20s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "�绰", "��ַ");
					printf("%-20s\t%-5s\t%-12s\t%-20s\n", start->peoinfo.name, start->peoinfo.sex, start->peoinfo.telepone,
						start->peoinfo.adtress);
					return;
				}
				start = start->next;
			}
			printf("�Բ���������û�д������ϵ��\n");

		}
		else if (in == 2)
		{
			printf("������Ҫ���ҵĵ绰:>");
			scanf("%s", &cmp);

			start = start->next;
			while (start != NULL)
			{
				if (!strcmp(start->peoinfo.telepone, cmp))
				{
					printf("%-20s\t%-5s\t%-12s\t%-20s\n", "����", "�Ա�", "�绰", "��ַ");
					printf("%-20s\t%-5s\t%-12s\t%-20s\n", start->peoinfo.name, start->peoinfo.sex, start->peoinfo.telepone,
						start->peoinfo.adtress);
					return;
				}
				start = start->next;
			}
			printf("�Բ���������û�д������ϵ��\n");
		}
		else
			printf("�������\n");
	}
	else
		printf("��δ��������\n");
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
		printf("����������β�����ϵ��\n");
		printf("1.����\t\t2.�绰����\n:>");
		scanf("%d", &in);
		if (in == 1)//��
		{
			printf("������Ҫ���ҵ�����:>");
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
			printf("�Բ���������û�д������ϵ��\n");

		}
		else if (in == 2)
		{
			printf("������Ҫ���ҵĵ绰:>");
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
			printf("�Բ���������û�д������ϵ��\n");
		}
		else
			printf("�������\n");
	}
	else
		printf("��δ��������\n");
	return;
change:
	tmp = start->next;
	last->next = tmp;
	free(start);
	printf("ɾ���ɹ���\n");
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
		printf("����������β�����ϵ��\n");
		printf("1.����\t\t2.�绰����\n:>");
		scanf("%d", &in);
		if (in == 1)//��
		{
			printf("������Ҫ���ҵ�����:>");
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
			printf("�Բ���������û�д������ϵ��\n");

		}
		else if (in == 2)
		{
			printf("������Ҫ���ҵĵ绰:>");
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
			printf("�Բ���������û�д������ϵ��\n");
		}
		else
			printf("�������\n");
	}
	else
		printf("��δ��������\n");
	return;
change:
	printf("������Ta��������:>");
	scanf("%s", start->peoinfo.name);
	printf("������Ta�����Ա�:>");
	scanf("%s", start->peoinfo.sex);
	printf("������Ta���µ绰:>");
	scanf("%s", start->peoinfo.telepone);
	printf("������Ta����סַ:>");
	scanf("%s", start->peoinfo.adtress);
	printf("����ɹ�!\n");
}

