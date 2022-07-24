#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

//打印
void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur!=NULL) 
	{
		printf("%d->",cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


//尾插
void SListPushBack(SListNode** pphead, SListDataType x)
{
	//申请一个新的结点
	SListNode* newSListNode=BuySListNode(x);

	//更改尾结点
	if (*pphead == NULL) //如果头结点就是尾结点
	{
		*pphead = newSListNode;
	}
	else//头结点不是尾结点的话,需要找到尾结点
	{
		//找尾结点
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		
		//找到了尾结点,更改
		tail->next = newSListNode;
	}

}

//头插
void SListPushFront(SListNode** pphead,SListDataType x)
{
	//申请新结点
	SListNode* newSListNode=BuySListNode(x);

	//把*pphead得到的原来的头结点的地址传给新结点
	 newSListNode->next = *pphead;

	 //将phead指向新结点
	 *pphead = newSListNode;
}

//申请新结点
SListNode* BuySListNode(SListDataType x)
{
	SListNode* newSListNode = (SListNode*)malloc(sizeof(SListNode));
	newSListNode->data = x;
	newSListNode->next = NULL;

	return newSListNode;
}


//尾删
void SListPopBack(SListNode** pphead)
{
	//链表不能为空
	assert( *pphead != NULL );

	//两种情况
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//找到前一个结点和尾结点
		SListNode* prev = NULL;
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		//释放尾结点.置空前一个结点的next
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}