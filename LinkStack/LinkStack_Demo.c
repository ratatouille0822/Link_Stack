#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "LinkStack.h"

typedef struct Userdata
{
	void* ptr;
	char name[50];
	int id;
}UserData;

int main(void)
{
	
	LinkStackType link_stack_instance = NULL;
	link_stack_instance = Init_LinkStack();

	UserData p1 = {NULL, "Liu, Bei", 1 };
	UserData p2 = {NULL, "Guan,Yu", 2 };
	UserData p3 = {NULL, "Zhang, Fei", 3 };

	Push_LinkStack(link_stack_instance, &p1);
	Push_LinkStack(link_stack_instance, &p2);
	Push_LinkStack(link_stack_instance, &p3);

	while (!IsEmpty_LinkStack(link_stack_instance))
	{
		UserData* p = (UserData*)GetTopElement_LinkStack(link_stack_instance);
		printf("%s--%d\n", p->name, p->id);
		Pop_LinkStack(link_stack_instance);
	}


	printf("\n");
	system("pause");
	return 0;
}
