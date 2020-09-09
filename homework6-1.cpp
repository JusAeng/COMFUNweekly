#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int numb,i,j;
	printf("!!BoxInFram!!\nat least 5 to see\n");
	printf("enter number : ");
	scanf("%d",&numb);
	for (i=1;i<=numb;i++)
	{
		for (j=1;j<=numb;j++)
		{
			//Box
			if(i==1||i==numb||j==1||j==numb)
			{
				printf("*");
			}
			//Blank
			else if(i==2||i==numb-1||j==2||j==numb-1)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
