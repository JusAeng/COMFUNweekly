#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[3],LCM,i,max=0,j;
	printf("enter 3 natural number : ");
	for (i=1;i<=3;i++)
	{
		scanf("%d",&a[i-1]);
		if(a[i-1]>=max)
		{
			max=a[i-1];
		}
	}
	for (j=max;j<=a[0]*a[1]*a[2];j++)
	{
		if (j%a[0]==0 && j%a[1]==0 && j%a[2]==0)
		{
			LCM=j;
			break;
		}
	}
	printf("\nLCM = %d",LCM);
}
