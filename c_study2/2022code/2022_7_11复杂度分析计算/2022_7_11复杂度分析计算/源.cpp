#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//嵌套循环复杂度
void Func1(int N)	//时间复杂度是O(n^2)
{
	int count = 0;
	for (int i = 0; i < N; ++i)//n次循环
	{
		for (int j = 0; j < N; ++j)//n次循环
		{
			++count;
		}
	}
	//整个循环n*n次

	for (int k = 0; k < 2 * N; ++k)//整个循环2*n次
	{
		++count;
	}

	int M = 10;
	while (M--)//整个循环10次
	{
		++count;
	}

	printf("%d\n", count);
}

//双重循环复杂度
void Func2(int N)
{
	int count = 0;
	for (int k = 0; k < 2 * N; ++k)//循环2*n次
	{
		++count;
	}


	int M = 10;
	while (M--)//循环10次
	{
		++count;
	}
	//时间复杂度为F(N)=2*n+10
	//大O表示为O(N)
	printf("%d\n", count);
}
void Func3(int N, int M)
{
	int count = 0;
	for (int k = 0; k < M; ++k)//M次
	{
		++count;
	}
	for (int k = 0; k < N; ++k)//N次
	{
		++count;
	}
	//没有说明M和N的大小关系,复杂度是O(M+N)


	//M远大于N,时间复杂度------>O(M)
	//N远大于M,时间复杂度------>O(N)
	//M和N差不多大,时间复杂度------>O(M)或者O(N)

	//一般情况下时间复杂度的未知数都是用N,但是也可以是M,K等等其他的

	printf("%d\n", count);
}


//常数循环复杂度
void Func4(int N)
{
	int count = 0;
	for (int k = 0; k < 100; ++k)//循环100次
	{
		++count;
	}

	//复杂度是O(1)
	//O(1)并不是代表算法运行一次，是常数次

	printf("%d\n", count);
}