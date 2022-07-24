#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef int SLD;

typedef struct
{
	SLD* a;
	int size;
	int c;
}SL;

void SLI(SL*p)
{
	p->a = NULL;
	p->size = p->c = 0;
}

void SLPB(SL* p, SLD x)
{
	//kuorong
	if (p->size == p->c)
	{
		int newc = p->c == 0 ? 4 : 2 * p->c;
		SLD* tmp = (SLD*)realloc(p->a,newc*sizeof(SLD));
		if (tmp == NULL)
		{
			printf("realloc fail");
			exit(-1);
		}
		p->a = tmp;
		p->c = newc;

	}

	//weicha
	p->a[p->size - 1] = x;
	p->size++;
}

void SLP(SL* p)
{
	for (int i = 0; i < p->size; ++i)
	{
		printf("%d ",p->a[i]);
	}
	printf("\n");
}

int main()
{
	SL s;

	SLI(&s);
	SLPB(&s,1);
	SLP(&s);
	return 0;
}