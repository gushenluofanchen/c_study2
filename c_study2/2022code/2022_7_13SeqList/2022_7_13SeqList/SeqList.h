#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//#define N 100
//typedef int SLDataType;
//
//
////��̬˳���
//typedef struct SeqList {
//
//	SLDataType a[N];
//	int size;//��ʾ�������ж�������
//
//}SL;
////��̬�ص�:������˾Ͳ��ò���
////ȱ��:�����ٿռ������,����ȷ��
////N��С�˲�����,�������˷�
//
//
////�ӿں���------��������Ǹ���c++STL���ݵ�,�������ѧϰSTL
//void SeqListInit(SL* ps, SLDataType x);//��ʼ��
//void SeqListPushBack(SL* ps, SLDataType x);//β��
//void SeqListPopBack(SL* ps);//βɾ
//void SeqListPushFront(SL* ps, SLDataType x);//ͷ��
//void SeqListPopFront(SL* ps);//ͷɾ





//--------------------------------------------------------------------





//SeqList�������
typedef int SLDataType;


//��̬˳���
typedef struct SeqList {

	SLDataType* a;//ָ��̬���ٵ�����Ԫ������ΪSLDataType������
	int size;//��ʾ�������ж�������
	int capacity;//��ʾʵ���ܴ����ݵĿռ�����
}SL;



//�ӿں���------��������Ǹ���c++STL���ݵ�,�������ѧϰSTL
void SeqListPrint(SL* ps);//��ӡ

void SeqListInit(SL* ps);//��ʼ��

void SeqListCheckCapacity(SL* ps);//����Ƿ���Ҫ����

void SeqListPushBack(SL* ps, SLDataType x);//β��,�����������x
void SeqListPopBack(SL* ps);//βɾ

void SeqListPushFront(SL* ps, SLDataType x);//ͷ��,�����������x
void SeqListPopFront(SL* ps);//ͷɾ

void SeqListDestory(SL*ps);//����




//�ҵ��˷���xλ���±�,û���ҵ�����-1
int SeqListFind(SL*ps,SLDataType x);
//ָ��pos�±�λ�ò�������
void SeqListInsert(SL* ps, int pos, SLDataType x);
//ɾ��posλ������
void SeqListErase(SL*ps,int pos);
