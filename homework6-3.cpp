#define _CRT_SECURE_NO_WARNINGS
//CarPark//
#include <stdio.h>
int main()
{
	int numb,m,n,i,j,a,b;
	int x[100]={},y[100]={},posi[100][100]={};
	printf("Input size of car-park (MxN): ");
	scanf("%d %d",&m,&n);
	printf("Cars in park : ");
	scanf("%d",&numb);
	for(i=1;i<=numb;i++)
	{
		printf("Position of cars NO.%d (x,y): ",i);
		scanf("%d %d",&x[i],&y[i]);
		posi[x[i]][y[i]]=1;
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(posi[i][j]==1)
			{
				printf("x");
			}
			else
			{
				printf("_");
			}
		}
		printf("\n");
	}
	return 0;
}
