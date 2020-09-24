#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//number_stairs_rev
int main()
{
	int numb[10],row,i,j;
	printf("input rows of stair : ");
	scanf("%d",&row);
	printf("input number you want : ");
	for(i=1;i<=row;i++)
	{
		scanf("%d",&numb[i-1]);
	}
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",numb[row-i]);
		}
		printf("\n");
	}
	return 0;
}
