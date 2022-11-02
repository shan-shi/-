#pragma once

#include<stdio.h>
#include <string.h>
#include<stdlib.h>

#define name_size 50
#define sex_size 20
#define telepone_size 20
#define adtress_size  50


typedef struct info
{
	char name[name_size];
	char sex[sex_size];
	char telepone[telepone_size];
	char adtress[adtress_size];
}info;

typedef struct people
{
	struct info peoinfo;
	struct people* next;
}people;

void addfunc( people**,people**,people**);
void showallfunc(people**);
void subfunc(people**);
void searchfunc(people**);
void changefunc(people**);




