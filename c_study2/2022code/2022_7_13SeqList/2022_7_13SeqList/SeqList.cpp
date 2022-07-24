#define _CRT_SECURE_NO_WARNINGS 1


//SeqList�ӿں�����ض���

#include"SeqList.h"

void SeqListPrint(SL* ps)//��ӡ
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}



void SeqListInit(SL* ps)//��ʼ��
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}


void SeqListCheckCapacity(SL* ps)//����
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));

		//����Ƿ����ݳɹ�
		if (tmp == NULL)
		{
			printf("realloc fail");
			exit(-1);
		}

		//���ݳɹ��Ļ�,����ps->a��ps->capacity
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}


void SeqListPushBack(SL* ps, SLDataType x)//β��
{
	//���û�пռ���߿ռ䲻��,�ͽ�������
	SeqListCheckCapacity(ps);

	//����β��
	ps->a[ps->size] = x;
	ps->size++;
}



void SeqListPopBack(SL* ps)//βɾ
{
	assert(ps->size>0);
	ps->size--;
}



void SeqListPushFront(SL* ps, SLDataType x)//ͷ��
{
	//����
	SeqListCheckCapacity(ps);

	//Ų������
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}

	//ͷ��
	ps->a[0] = x;
	ps->size++;
}



void SeqListPopFront(SL* ps)//ͷɾ
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


//����
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}