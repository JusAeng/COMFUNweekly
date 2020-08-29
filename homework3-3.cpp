#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x,max=0,min,n;
	float t=0, mean;
	printf("enter 5 number : ");
	for(x=1;x<=5;x++)
	{
		if(x==1)
		{
			printf("%d# ",x);
			scanf("%d",&n);
			min=n;
		}
		else
		{
			printf("                 %d# ",x);
			scanf("%d",&n);
		}
		if (max<=n)
		{
			max=n;
		}
		if (min>n)
		{
			min=n;
		}
		t+=n;
	}
	printf("\nmaximum number = %d",max);
	printf("\nminimum number = %d",min);
	mean=t/5;
	printf("\nMean = %.2f",mean);
}

