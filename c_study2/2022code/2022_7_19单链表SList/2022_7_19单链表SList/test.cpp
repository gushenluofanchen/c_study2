#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void test1( )
{
	SListNode* plist=NULL;

	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	SListPopBack(&plist);
	SListPrint(plist);
}

void test2()
{
	SListNode* plist = NULL;

	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);

	SListPrint(plist);
}


int main()
{

	test1();
	//test2();


	return 0;
}