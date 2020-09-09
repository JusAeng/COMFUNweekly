#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i,j,numb;
	printf("enter odd number at least 9 : ");
	scanf("%d",&numb);
	for(i=1;i<=numb;i++)
	{
		for (j=1;j<=numb;j++)
		{
			if (i==1||i==numb||j==1||j==numb||i==j||j==numb+1-i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

