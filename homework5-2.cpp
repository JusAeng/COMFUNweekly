#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int numb,i,j,k;
	printf("enter number (less than 30) : ");
	scanf("%d",&numb);
	if(numb<=100)
	{
		for(i=1;i<=numb;i++)
		{
			for(j=i;j<=numb;j++)
			{
				if(j==numb)
				{
					printf("%4s","z");
				}
				else
				{
					printf("%4d",j);		
				}
			}
			for(k=1;k<=i-1;k++)
				{
					if(i==1)break;
					printf("%4d",k);
				}
			printf("\n");
		}
	}
	else
	{
		printf("\n!!-IT TOO BIG-!!");
	}
}
