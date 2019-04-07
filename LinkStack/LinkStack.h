#pragma once

typedef struct Node
{
	struct Node* next;

}Node, *pNode;

typedef struct LinkStackMan
{
	Node head;
	int size;
}LinkStackMan, *pLinkStackMan;

typedef void* LinkStackType;
typedef void* DataType;

LinkStackType Init_LinkStack();
int Push_LinkStack(pLinkStackMan link_stack_manager, DataType data);
int Pop_LinkStack(pLinkStackMan link_stack_manager);
DataType GetTopElement_LinkStack(pLinkStackMan link_stack_manager);
int GetSize_LinkStack(pLinkStackMan link_stack_manager);
int IsEmpty_LinkStack(pLinkStackMan link_stack_manager);
int Free_LinkStack(pLinkStackMan link_stack_manager);

