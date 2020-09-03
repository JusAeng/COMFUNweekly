#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main()
{
	unsigned int numb,i,j,horizon;
	printf("Enter odd number (max=99) : ");
	scanf("%d",&numb);
	horizon=numb/2+1;
	if(numb%2==0&&numb<=99)
	{
		printf("\nPlease enter odd number!");
	}
	else if(numb%2==1&&numb<=99)
	{
		for(i=1;i<=numb;i+=2)
		{
			printf(" %d",i);
		}
		printf("\n");
		for (i=1;i<=horizon;i++)
		{
			for(j=1;j<=horizon;j++)
			{
				if(j>=7)
				{
					if(j>i)
					{
						if(j-1==i)
						{
							printf("  %d",j*2-1);
						}
						else
						{
							printf(" %d",j*2-1);
						}
					}
					else
					{
						printf("  *");
					}
				}
				else
				{
					if(j>i)
					{
						printf(" %d",j*2-1);
					}
					else
					{
						printf(" *");
					}
				}
			}
			printf("\n");
		}
		
	}
	else
	{
		printf("\nThe number is too big!");
	}
}
