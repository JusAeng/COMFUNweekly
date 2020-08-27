#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x,wp,w=0;
	for (x=1;x<=6;x++)
	{
		if (x<=6)
		{
			printf("Your weight no.%d : ",x);
			scanf("%d",&wp);
			w+=wp;
			if(w>450)
			{
				printf("OVER WEIGHT!!!\n");
				w-=wp;
				x-=1;
			}
		}
	}
	printf("Total wieght : %d",w);
}
