#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//Ƕ��ѭ�����Ӷ�
void Func1(int N)	//ʱ�临�Ӷ���O(n^2)
{
	int count = 0;
	for (int i = 0; i < N; ++i)//n��ѭ��
	{
		for (int j = 0; j < N; ++j)//n��ѭ��
		{
			++count;
		}
	}
	//����ѭ��n*n��

	for (int k = 0; k < 2 * N; ++k)//����ѭ��2*n��
	{
		++count;
	}

	int M = 10;
	while (M--)//����ѭ��10��
	{
		++count;
	}

	printf("%d\n", count);
}

//˫��ѭ�����Ӷ�
void Func2(int N)
{
	int count = 0;
	for (int k = 0; k < 2 * N; ++k)//ѭ��2*n��
	{
		++count;
	}


	int M = 10;
	while (M--)//ѭ��10��
	{
		++count;
	}
	//ʱ�临�Ӷ�ΪF(N)=2*n+10
	//��O��ʾΪO(N)
	printf("%d\n", count);
}
void Func3(int N, int M)
{
	int count = 0;
	for (int k = 0; k < M; ++k)//M��
	{
		++count;
	}
	for (int k = 0; k < N; ++k)//N��
	{
		++count;
	}
	//û��˵��M��N�Ĵ�С��ϵ,���Ӷ���O(M+N)


	//MԶ����N,ʱ�临�Ӷ�------>O(M)
	//NԶ����M,ʱ�临�Ӷ�------>O(N)
	//M��N����,ʱ�临�Ӷ�------>O(M)����O(N)

	//һ�������ʱ�临�Ӷȵ�δ֪��������N,����Ҳ������M,K�ȵ�������

	printf("%d\n", count);
}


//����ѭ�����Ӷ�
void Func4(int N)
{
	int count = 0;
	for (int k = 0; k < 100; ++k)//ѭ��100��
	{
		++count;
	}

	//���Ӷ���O(1)
	//O(1)�����Ǵ����㷨����һ�Σ��ǳ�����

	printf("%d\n", count);
}