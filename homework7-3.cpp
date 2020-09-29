#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//hori_barGraph
int main()
{
	int numb[1000],i=0,j;
	do
	{
		scanf("%d",&numb[i]);
		printf("\t");
		for(j=1;j<=numb[i];j++)
		{
			printf("*");
		}
		printf("\n");
	}while(numb[i]>0);
	
	return 0;
}
