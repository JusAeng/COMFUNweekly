#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//AdditionMatrix3*3
int main()
{
	int A[3][3],B[3][3],i,j,C[3][3];
	printf("Input number in matrix A :\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%d",&A[i-1][j-1]);
		}
	}
	printf("Input number in matrix B :\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%d",&B[i-1][j-1]);
		}
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			C[i-1][j-1]=A[i-1][j-1]+B[i-1][j-1];
		}
	}
	printf("Matrix A+B :\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%3d",C[i-1][j-1]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
