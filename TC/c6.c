#include<stdio.h>

void ShowNumber(int iNumber);


int main()
{
	int iShowNumber;
	printf("What Number do you wanna show? \n");
	scanf("%d",&iShowNumber);
	ShowNumber(iShowNumber);
	return 0;
}



void ShowNumber(int iNumber)
{
	printf("You wanna to show the Number is:%d\n",iNumber);
}


