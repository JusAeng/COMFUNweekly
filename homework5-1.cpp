#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i,j,k,s;
	printf("enter size : ");
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
		for(j=1;j<=s;j++)
		{
			if(i==1||i==s||j==1||j==s)
				printf("+ ");
			else if(i==j||j==s+1-i)
				printf("o ");
			else
				printf("* ");		
		}
		printf("\n");
	}
}
