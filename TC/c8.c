#include<stdio.h>

int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}

void main()
{
	int x,y,sum;
	printf("please input two numbers:");
	scanf("%d,%d",&x,&y);
	sum=add(x,y);
	printf("sum=%d\n",sum);
}

