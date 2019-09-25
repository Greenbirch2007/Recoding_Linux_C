#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char *str,int i,int j)
{
	char c;
	c =str[i];str[i]=str[j];str[j] =c;
}

void permutation(char *str,int start,int end)
{
	if(start<end)
	{
		if(start+1 == end)
		{
			printf("%s\n",str);
		}
		else{
			int i;
			for(i=start,i<end;i++)
			{
				swap(str,start,i);
				permutation(str,start+1,end);
				swap(str,start,i);
			}
		}
	}
}

int main()
{
	char s[] ="abcd";
	permutation(s,0,strlen(s));
	return 0;
}


