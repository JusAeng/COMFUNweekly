#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void linePrint(int);
int main() 
{
	int numb,i,j;
	printf("enter number : ");
	scanf("%d",&numb);
	for(i=0;i<=numb;i++)
	{
		for(j=1;j<=numb-i;j++)
		{
			printf(" ");
		}
		linePrint(i);
		printf("\n");
	}
}
void linePrint(int numb)
{
	int x;
	if(numb==0)
	{
		printf("*");
	}
	else
	{
		for(x=1;x<=numb*2+1;x++)
		{
			if(x==numb+1)
			{
				printf("%d",numb);
			}
			else
			{
				printf("*");
			}
		}
	}
}

