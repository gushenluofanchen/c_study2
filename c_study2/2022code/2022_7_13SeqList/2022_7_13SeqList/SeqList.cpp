#define _CRT_SECURE_NO_WARNINGS 1


//SeqList接口函数相关定义

#include"SeqList.h"

void SeqListPrint(SL* ps)//打印
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}



void SeqListInit(SL* ps)//初始化
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}


void SeqListCheckCapacity(SL* ps)//扩容
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));

		//检查是否扩容成功
		if (tmp == NULL)
		{
			printf("realloc fail");
			exit(-1);
		}

		//扩容成功的话,更新ps->a和ps->capacity
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}


void SeqListPushBack(SL* ps, SLDataType x)//尾插
{
	//如果没有空间或者空间不足,就进行扩容
	SeqListCheckCapacity(ps);

	//进行尾插
	ps->a[ps->size] = x;
	ps->size++;
}



void SeqListPopBack(SL* ps)//尾删
{
	assert(ps->size>0);
	ps->size--;
}



void SeqListPushFront(SL* ps, SLDataType x)//头插
{
	//扩容
	SeqListCheckCapacity(ps);

	//挪动数据
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}

	//头插
	ps->a[0] = x;
	ps->size++;
}



void SeqListPopFront(SL* ps)//头删
{
	assert(ps->size>0);

	int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}

	ps->size--;
}


//销毁
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}