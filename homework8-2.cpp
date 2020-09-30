#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2D_stride_1
int main()
{
	int i,j,numb,box[100],off=1,k;
	printf("Input number : ");
	scanf("%d",&numb);
	for(i=1;i<=numb;i++)
	{
		if(i>=11)
		{
			box[i-1]=box[i-11];
		}
		else if(i==10)
		{
			box[9]=0;
		}
		else
		{
			box[i-1]=i;
		}
	}
	while(off<=numb)
	{
		for(i=1;i<=numb;i++)
		{
			printf("%d ",box[i-1]);
		}
		printf("\n");
		k=box[numb-1];
		for(j=1;j<=numb;j++)
		{	
			if(j==numb)
			{
				box[0]=k;
			}
			else
			{
				box[numb-j]=box[numb-j-1];
			}
		}
		off+=1;
	}
	
	
	return 0;
}
