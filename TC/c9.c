#include<stdio.h>

int main()
{
	int *pInt;
	pInt =(int*)malloc(sizeof(int));

	*pInt=100;
	printf("the number is: %d\n",*pInt);
	free(pInt);
	return 0;
}
