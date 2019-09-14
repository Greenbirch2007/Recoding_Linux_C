#include<stdio.h>
#define MIX(a,b)((a)*(b)+(b))

main()
{
	int x=5,y=9;
	printf("x,y\n");
	printf("%d,%d\n",x,y);
	printf("the min number is: %d\n",MIX(x,y));
}
