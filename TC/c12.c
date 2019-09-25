#include<stdio.h>

int main()
{
	int rank;
	scanf("%d\n",&rank); // 取地址
	switch(rank){
		case 1: printf("Ace!\n");break;
		case 11:printf("Jack!\n");
		case 12:printf("Queen!\n");break;
		case 13:printf("King!\n");
		default:printf("unknow:%d\n",rank);
	}
	return 0;}
