#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

//��ӡ
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


//β��
void SListPushBack(SListNode** pphead, SListDataType x)
{
	//����һ���µĽ��
	SListNode* newSListNode=BuySListNode(x);

	//����β���
	if (*pphead == NULL) //���ͷ������β���
	{
		*pphead = newSListNode;
	}
	else//ͷ��㲻��β���Ļ�,��Ҫ�ҵ�β���
	{
		//��β���
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		
		//�ҵ���β���,����
		tail->next = newSListNode;
	}

}

//ͷ��
void SListPushFront(SListNode** pphead,SListDataType x)
{
	//�����½��
	SListNode* newSListNode=BuySListNode(x);

	//��*pphead�õ���ԭ����ͷ���ĵ�ַ�����½��
	 newSListNode->next = *pphead;

	 //��pheadָ���½��
	 *pphead = newSListNode;
}

//�����½��
SListNode* BuySListNode(SListDataType x)
{
	SListNode* newSListNode = (SListNode*)malloc(sizeof(SListNode));
	newSListNode->data = x;
	newSListNode->next = NULL;

	return newSListNode;
}


//βɾ
void SListPopBack(SListNode** pphead)
{
	//������Ϊ��
	assert( *pphead != NULL );

	//�������
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//�ҵ�ǰһ������β���
		SListNode* prev = NULL;
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		//�ͷ�β���.�ÿ�ǰһ������next
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}