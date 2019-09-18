#include<stdio.h>

void main()
{
	float x,amax,amin;
	scanf("%f",&x);
	amax=x;
	amin=x;
	while(x>=0.0)
	{
		if(x>amax)
			amax=x;
		if(amin>=x)
			amin=x;
		scanf("%f",&x);
	}
	printf("\n amax=%f \n amin=%f \n",amax,amin);
}
