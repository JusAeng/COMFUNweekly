#define _CRT_SECURE_NO_WARNINGS
//Rhombus//
#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,numb,a;
	printf("Input odd number : ");
	scanf("%d",&numb);
	a=(numb-1)/2;
	for(i=a;i>=-a;i--)
	{
		for(j=-a;j<=a;j++)
		{
			if(abs(i)+abs(j)<=a)
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
