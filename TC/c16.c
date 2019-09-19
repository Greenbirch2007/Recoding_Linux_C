#include<stdio.h>

int main()
{
	char *num[5] = {"wer","wer","asdf","er","wer"};
	int i;
	char **p;
	p=num;
	for(i=0;i<6;i++)
	printf("%s\n",*(p+i));
	return 0;
}
