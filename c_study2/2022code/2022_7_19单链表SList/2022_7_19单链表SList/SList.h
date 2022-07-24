#pragma once

#include<stdio.h>
#include<string>
#include<assert.h>

typedef int SListDataType;

typedef struct SListNode{

	SListDataType data;
	SListNode* next;

}SListNode;


//��ӡ
void SListPrint ( SListNode* phead );

//β��
void SListPushBack(SListNode** pphead, SListDataType x);

//ͷ��
void SListPushFront(SListNode** pphead,SListDataType x);

//�����½��
SListNode* BuySListNode(SListDataType x);

//βɾ
void SListPopBack(SListNode** pphead);