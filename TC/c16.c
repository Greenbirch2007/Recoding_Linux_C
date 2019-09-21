#include<stdio.h>

typedef struct
{
	char a[10];
	int b;
} AB;

getdata(AB *p)
{
	scanf("%s%d,p->a,&p->b");
}

void main()
{
	AB s;;
	getdata(&s);
	printf("%s,%d\n",s.a,s.b);}
