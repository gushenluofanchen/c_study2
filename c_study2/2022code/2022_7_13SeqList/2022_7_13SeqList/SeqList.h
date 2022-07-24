#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//#define N 100
//typedef int SLDataType;
//
//
////静态顺序表
//typedef struct SeqList {
//
//	SLDataType a[N];
//	int size;//表示数组中有多少数据
//
//}SL;
////静态特点:如果满了就不让插入
////缺点:给多少空间合适呢,很难确定
////N给小了不够用,给大了浪费
//
//
////接口函数------命名风格是跟着c++STL库州的,方便后续学习STL
//void SeqListInit(SL* ps, SLDataType x);//初始化
//void SeqListPushBack(SL* ps, SLDataType x);//尾插
//void SeqListPopBack(SL* ps);//尾删
//void SeqListPushFront(SL* ps, SLDataType x);//头插
//void SeqListPopFront(SL* ps);//头删





//--------------------------------------------------------------------





//SeqList相关申明
typedef int SLDataType;


//动态顺序表
typedef struct SeqList {

	SLDataType* a;//指向动态开辟的数据元素类型为SLDataType的数组
	int size;//表示数组中有多少数据
	int capacity;//表示实际能存数据的空间容量
}SL;



//接口函数------命名风格是跟着c++STL库州的,方便后续学习STL
void SeqListPrint(SL* ps);//打印

void SeqListInit(SL* ps);//初始化

void SeqListCheckCapacity(SL* ps);//检查是否需要扩容

void SeqListPushBack(SL* ps, SLDataType x);//尾插,插入的数据是x
void SeqListPopBack(SL* ps);//尾删

void SeqListPushFront(SL* ps, SLDataType x);//头插,插入的数据是x
void SeqListPopFront(SL* ps);//头删

void SeqListDestory(SL*ps);//销毁




//找到了返回x位置下标,没有找到返回-1
int SeqListFind(SL*ps,SLDataType x);
//指定pos下标位置插入数据
void SeqListInsert(SL* ps, int pos, SLDataType x);
//删除pos位置数据
void SeqListErase(SL*ps,int pos);
