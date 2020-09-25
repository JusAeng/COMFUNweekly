#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//A1_hori
int main()
{
	int n,i,j,z;
	printf("input odd number : ");
	scanf("%d",&n);
	z=(n+1)/2;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=z;j++)
		{
			if(j>i)
			{
				printf("1");
			}
			else if(i>z && j>2*z-i)
			{
				printf("*");
			}
			else
			{
				printf("A");
			}
		}
		printf("\n");
	}
	return 0;
}
