#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//Counterclockwise_RotationMatrix
int main()
{
	int m,n,i,j,box[50][50],boxr[50][50];
	printf("enter size (MxN) : ");
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&box[i-1][j-1]);
		}
	}
	
	//Rotate
	printf("Rotate!!\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%d ",box[j-1][n-i]);
		}
		printf("\n");
	}
	
	return 0;
}
