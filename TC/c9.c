#include<stdio.h>

void main()
{
	int k=4,m=1,p;
	int func(int,int);
	p= func(k,m);
	printf("%d,",p);
	p=func(k,m);
	printf("%d\n",p);
}

int func(int a,int b)
{
	static int m=0,i=2;
	i += m+1;
	m =i+a+b;
	return m;
}

