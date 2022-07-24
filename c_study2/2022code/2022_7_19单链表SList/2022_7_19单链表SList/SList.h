#pragma once

#include<stdio.h>
#include<string>
#include<assert.h>

typedef int SListDataType;

typedef struct SListNode{

	SListDataType data;
	SListNode* next;

}SListNode;


//打印
void SListPrint ( SListNode* phead );

//尾插
void SListPushBack(SListNode** pphead, SListDataType x);

//头插
void SListPushFront(SListNode** pphead,SListDataType x);

//申请新结点
SListNode* BuySListNode(SListDataType x);

//尾删
void SListPopBack(SListNode** pphead);